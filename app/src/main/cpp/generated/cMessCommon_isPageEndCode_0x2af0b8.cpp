#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cMessCommon_isPageEndCode
// Address: 0x2af0b8 - 0x2af1f8
void cMessCommon_isPageEndCode_0x2af0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessCommon_isPageEndCode_0x2af0b8");
#endif

    ctx->pc = 0x2af0b8u;

    // 0x2af0b8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2af0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2af0bc: 0x413c2  srl         $v0, $a0, 15
    ctx->pc = 0x2af0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 15));
    // 0x2af0c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF0C0u;
    {
        const bool branch_taken_0x2af0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0C0u;
        // 0x2af0c4: 0x3084ff00  andi        $a0, $a0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0c0) {
            ctx->pc = 0x2AF0D0u;
            goto label_2af0d0;
        }
    }
    ctx->pc = 0x2AF0C8u;
    // 0x2af0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0C8u;
        // 0x2af0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF0D0u;
label_2af0d0:
    // 0x2af0d0: 0x3402a600  ori         $v0, $zero, 0xA600
    ctx->pc = 0x2af0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42496);
    // 0x2af0d4: 0x10820044  beq         $a0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AF0D4u;
    {
        const bool branch_taken_0x2af0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0D4u;
        // 0x2af0d8: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0d4) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF0DCu;
    // 0x2af0dc: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2AF0DCu;
    {
        const bool branch_taken_0x2af0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0DCu;
        // 0x2af0e0: 0x3402da00  ori         $v0, $zero, 0xDA00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55808);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0dc) {
            ctx->pc = 0x2AF16Cu;
            goto label_2af16c;
        }
    }
    ctx->pc = 0x2AF0E4u;
    // 0x2af0e4: 0x34028300  ori         $v0, $zero, 0x8300
    ctx->pc = 0x2af0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x2af0e8: 0x1082003f  beq         $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2AF0E8u;
    {
        const bool branch_taken_0x2af0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0E8u;
        // 0x2af0ec: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0e8) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF0F0u;
    // 0x2af0f0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF0F0u;
    {
        const bool branch_taken_0x2af0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0F0u;
        // 0x2af0f4: 0x34029000  ori         $v0, $zero, 0x9000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0f0) {
            ctx->pc = 0x2AF130u;
            goto label_2af130;
        }
    }
    ctx->pc = 0x2AF0F8u;
    // 0x2af0f8: 0x34028100  ori         $v0, $zero, 0x8100
    ctx->pc = 0x2af0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2af0fc: 0x1082003a  beq         $a0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2AF0FCu;
    {
        const bool branch_taken_0x2af0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0FCu;
        // 0x2af100: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0fc) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF104u;
    // 0x2af104: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF104u;
    {
        const bool branch_taken_0x2af104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF104u;
        // 0x2af108: 0x34028200  ori         $v0, $zero, 0x8200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af104) {
            ctx->pc = 0x2AF120u;
            goto label_2af120;
        }
    }
    ctx->pc = 0x2AF10Cu;
    // 0x2af10c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2af10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2af110: 0x10820035  beq         $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2AF110u;
    {
        const bool branch_taken_0x2af110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF110u;
        // 0x2af114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af110) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF118u;
    // 0x2af118: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2AF118u;
    {
        const bool branch_taken_0x2af118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af118) {
            ctx->pc = 0x2AF1F0u;
            goto label_2af1f0;
        }
    }
    ctx->pc = 0x2AF120u;
label_2af120:
    // 0x2af120: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2AF120u;
    {
        const bool branch_taken_0x2af120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF120u;
        // 0x2af124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af120) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF128u;
    // 0x2af128: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2AF128u;
    {
        const bool branch_taken_0x2af128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af128) {
            ctx->pc = 0x2AF1F0u;
            goto label_2af1f0;
        }
    }
    ctx->pc = 0x2AF130u;
label_2af130:
    // 0x2af130: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AF130u;
    {
        const bool branch_taken_0x2af130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF130u;
        // 0x2af134: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af130) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF138u;
    // 0x2af138: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF138u;
    {
        const bool branch_taken_0x2af138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF138u;
        // 0x2af13c: 0x3402a100  ori         $v0, $zero, 0xA100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41216);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af138) {
            ctx->pc = 0x2AF154u;
            goto label_2af154;
        }
    }
    ctx->pc = 0x2AF140u;
    // 0x2af140: 0x34028900  ori         $v0, $zero, 0x8900
    ctx->pc = 0x2af140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
    // 0x2af144: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2AF144u;
    {
        const bool branch_taken_0x2af144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF144u;
        // 0x2af148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af144) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF14Cu;
    // 0x2af14c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2AF14Cu;
    {
        const bool branch_taken_0x2af14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af14c) {
            ctx->pc = 0x2AF1F0u;
            goto label_2af1f0;
        }
    }
    ctx->pc = 0x2AF154u;
label_2af154:
    // 0x2af154: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2AF154u;
    {
        const bool branch_taken_0x2af154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF154u;
        // 0x2af158: 0x3402a500  ori         $v0, $zero, 0xA500 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af154) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF15Cu;
    // 0x2af15c: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AF15Cu;
    {
        const bool branch_taken_0x2af15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF15Cu;
        // 0x2af160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af15c) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF164u;
    // 0x2af164: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2AF164u;
    {
        const bool branch_taken_0x2af164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af164) {
            ctx->pc = 0x2AF1F0u;
            goto label_2af1f0;
        }
    }
    ctx->pc = 0x2AF16Cu;
label_2af16c:
    // 0x2af16c: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AF16Cu;
    {
        const bool branch_taken_0x2af16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF16Cu;
        // 0x2af170: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af16c) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF174u;
    // 0x2af174: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF174u;
    {
        const bool branch_taken_0x2af174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF174u;
        // 0x2af178: 0x3402e400  ori         $v0, $zero, 0xE400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af174) {
            ctx->pc = 0x2AF1B4u;
            goto label_2af1b4;
        }
    }
    ctx->pc = 0x2AF17Cu;
    // 0x2af17c: 0x3402d200  ori         $v0, $zero, 0xD200
    ctx->pc = 0x2af17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53760);
    // 0x2af180: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AF180u;
    {
        const bool branch_taken_0x2af180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF180u;
        // 0x2af184: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af180) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF188u;
    // 0x2af188: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF188u;
    {
        const bool branch_taken_0x2af188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF188u;
        // 0x2af18c: 0x3402d900  ori         $v0, $zero, 0xD900 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55552);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af188) {
            ctx->pc = 0x2AF1A4u;
            goto label_2af1a4;
        }
    }
    ctx->pc = 0x2AF190u;
    // 0x2af190: 0x3402a700  ori         $v0, $zero, 0xA700
    ctx->pc = 0x2af190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42752);
    // 0x2af194: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AF194u;
    {
        const bool branch_taken_0x2af194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF194u;
        // 0x2af198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af194) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF19Cu;
    // 0x2af19c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2AF19Cu;
    {
        const bool branch_taken_0x2af19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af19c) {
            ctx->pc = 0x2AF1F0u;
            goto label_2af1f0;
        }
    }
    ctx->pc = 0x2AF1A4u;
label_2af1a4:
    // 0x2af1a4: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AF1A4u;
    {
        const bool branch_taken_0x2af1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1A4u;
        // 0x2af1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1a4) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF1ACu;
    // 0x2af1ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AF1ACu;
    {
        const bool branch_taken_0x2af1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af1ac) {
            ctx->pc = 0x2AF1F0u;
            goto label_2af1f0;
        }
    }
    ctx->pc = 0x2AF1B4u;
label_2af1b4:
    // 0x2af1b4: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF1B4u;
    {
        const bool branch_taken_0x2af1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1B4u;
        // 0x2af1b8: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1b4) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF1BCu;
    // 0x2af1bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF1BCu;
    {
        const bool branch_taken_0x2af1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1BCu;
        // 0x2af1c0: 0x3402e500  ori         $v0, $zero, 0xE500 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58624);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1bc) {
            ctx->pc = 0x2AF1D8u;
            goto label_2af1d8;
        }
    }
    ctx->pc = 0x2AF1C4u;
    // 0x2af1c4: 0x3402e200  ori         $v0, $zero, 0xE200
    ctx->pc = 0x2af1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57856);
    // 0x2af1c8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF1C8u;
    {
        const bool branch_taken_0x2af1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1C8u;
        // 0x2af1cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1c8) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF1D0u;
    // 0x2af1d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF1D0u;
    {
        const bool branch_taken_0x2af1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af1d0) {
            ctx->pc = 0x2AF1F0u;
            goto label_2af1f0;
        }
    }
    ctx->pc = 0x2AF1D8u;
label_2af1d8:
    // 0x2af1d8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF1D8u;
    {
        const bool branch_taken_0x2af1d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1D8u;
        // 0x2af1dc: 0x3402e700  ori         $v0, $zero, 0xE700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59136);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1d8) {
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF1E0u;
    // 0x2af1e0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF1E0u;
    {
        const bool branch_taken_0x2af1e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1E0u;
        // 0x2af1e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1e0) {
            ctx->pc = 0x2AF1F0u;
            goto label_2af1f0;
        }
    }
    ctx->pc = 0x2AF1E8u;
label_2af1e8:
    // 0x2af1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1E8u;
        // 0x2af1ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF1F0u;
label_2af1f0:
    // 0x2af1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF1F8u;
}
