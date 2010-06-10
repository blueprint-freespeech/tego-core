/* TorIM - http://gitorious.org/torim
 * Copyright (C) 2010, John Brooks <special@dereferenced.net>
 *
 * TorIM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TorIM. If not, see http://www.gnu.org/licenses/
 */

#include "VidaliaConfigPage.h"
#include "VidaliaExitWidget.h"
#include "VidaliaStartWidget.h"
#include "VidaliaTestWidget.h"
#include "tor/autoconfig/VidaliaConfigManager.h"
#include <QStackedLayout>
#include <QBoxLayout>
#include <QLabel>
#include <QDebug>

using namespace TorConfig;

VidaliaConfigPage::VidaliaConfigPage(QWidget *parent)
    : QWizardPage(parent), m_stack(new QStackedLayout(this)), vidaliaConfig(0), testWidget(0)
{
}

void VidaliaConfigPage::initializePage()
{
    vidaliaConfig = new VidaliaConfigManager(this);
    Q_ASSERT(vidaliaConfig->isVidaliaInstalled());

    if (!vidaliaConfig->hasCompatibleConfig())
    {
        /* Reconfiguration will be necessary */
        if (vidaliaConfig->isVidaliaRunning())
        {
            /* Prompt the user to close Vidalia */
            VidaliaExitWidget *exitWidget = new VidaliaExitWidget(vidaliaConfig);
            connect(exitWidget, SIGNAL(exited()), this, SLOT(doConfiguration()));
            m_stack->setCurrentIndex(m_stack->addWidget(exitWidget));
        }
        else
            doConfiguration();
    }
    else
        doTest();
}

void VidaliaConfigPage::cleanupPage()
{
    while (m_stack->count())
        m_stack->takeAt(0)->widget()->deleteLater();

    delete vidaliaConfig;
    vidaliaConfig = 0;

    testWidget = 0;
}

bool VidaliaConfigPage::isComplete() const
{
    return testWidget && testWidget->hasTestSucceeded();
}

int VidaliaConfigPage::nextId() const
{
    return -1;
}

void VidaliaConfigPage::doConfiguration()
{
    qDebug() << "Doing configuration";

    if (!vidaliaConfig->isVidaliaRunning())
    {
        /* Prompt the user to open Vidalia */
        bool wasExited = qobject_cast<VidaliaExitWidget*>(sender()) != 0;
        VidaliaStartWidget *startWidget = new VidaliaStartWidget(vidaliaConfig, wasExited);
        connect(startWidget, SIGNAL(ready()), this, SLOT(doTest()));
        m_stack->setCurrentIndex(m_stack->addWidget(startWidget));
    }
    else
        doTest();
}

void VidaliaConfigPage::doTest()
{
    Q_ASSERT(!testWidget);
    testWidget = new VidaliaTestWidget(vidaliaConfig);
    connect(testWidget, SIGNAL(stateChanged()), this, SIGNAL(completeChanged()));
    m_stack->setCurrentIndex(m_stack->addWidget(testWidget));
}