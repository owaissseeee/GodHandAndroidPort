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

// Function: cCoreSave_loadStageState
// Address: 0x1f9cb0 - 0x1f9dd0
void cCoreSave_loadStageState_0x1f9cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_loadStageState_0x1f9cb0");
#endif

    switch (ctx->pc) {
        case 0x1f9cecu: goto label_1f9cec;
        case 0x1f9d04u: goto label_1f9d04;
        case 0x1f9d14u: goto label_1f9d14;
        case 0x1f9d1cu: goto label_1f9d1c;
        case 0x1f9d28u: goto label_1f9d28;
        case 0x1f9d34u: goto label_1f9d34;
        case 0x1f9d44u: goto label_1f9d44;
        case 0x1f9d50u: goto label_1f9d50;
        case 0x1f9d7cu: goto label_1f9d7c;
        case 0x1f9da8u: goto label_1f9da8;
        case 0x1f9db0u: goto label_1f9db0;
        case 0x1f9db8u: goto label_1f9db8;
        default: break;
    }

    ctx->pc = 0x1f9cb0u;

    // 0x1f9cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9cb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f9cb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f9cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f9cbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9cc0: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1F9CC0u;
    {
        const bool branch_taken_0x1f9cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CC0u;
        // 0x1f9cc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cc0) {
            ctx->pc = 0x1F9DB8u;
            goto label_1f9db8;
        }
    }
    ctx->pc = 0x1F9CC8u;
    // 0x1f9cc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9ccc: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1f9cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x1f9cd0: 0x24a574a0  addiu       $a1, $a1, 0x74A0
    ctx->pc = 0x1f9cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x1f9cd4: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x1f9cd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f9cd8: 0xa4a205b4  sh          $v0, 0x5B4($a1)
    ctx->pc = 0x1f9cd8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x747A54u, _value); } while (0);
    // 0x1f9cdc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9ce0: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x1f9ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f9ce4: 0xc07e7d4  jal         func_1F9F50
    ctx->pc = 0x1F9CE4u;
    SET_GPR_U32(ctx, 31, 0x1F9CECu);
    ctx->pc = 0x1F9CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9CE4u;
    // 0x1f9ce8: 0xa4a205b6  sh          $v0, 0x5B6($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 1462), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9F50u, 0x1F9CE4u, 0x1F9CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9CECu;
label_1f9cec:
    // 0x1f9cec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9cf0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x1f9cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x1f9cf4: 0x2610a990  addiu       $s0, $s0, -0x5670
    ctx->pc = 0x1f9cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945168));
    // 0x1f9cf8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f9cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9cfc: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x1F9CFCu;
    SET_GPR_U32(ctx, 31, 0x1F9D04u);
    ctx->pc = 0x1F9D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9CFCu;
    // 0x1f9d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x1F9CFCu, 0x1F9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D04u;
label_1f9d04:
    // 0x1f9d04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d0c: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x1F9D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D14u);
    ctx->pc = 0x1F9D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D0Cu;
    // 0x1f9d10: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D48u, 0x1F9D0Cu, 0x1F9D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D14u;
label_1f9d14:
    // 0x1f9d14: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F9D14u;
    SET_GPR_U32(ctx, 31, 0x1F9D1Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F9D14u, 0x1F9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D1Cu;
label_1f9d1c:
    // 0x1f9d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d20: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x1F9D20u;
    SET_GPR_U32(ctx, 31, 0x1F9D28u);
    ctx->pc = 0x1F9D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D20u;
    // 0x1f9d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x1F9D20u, 0x1F9D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D28u;
label_1f9d28:
    // 0x1f9d28: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x1f9d28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9d2c: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x1F9D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D34u);
    ctx->pc = 0x1F9D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D2Cu;
    // 0x1f9d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x1F9D2Cu, 0x1F9D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D34u;
label_1f9d34:
    // 0x1f9d34: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9D34u;
    {
        const bool branch_taken_0x1f9d34 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1f9d34) {
            ctx->pc = 0x1F9D74u;
            goto label_1f9d74;
        }
    }
    ctx->pc = 0x1F9D3Cu;
    // 0x1f9d3c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D44u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F9D3Cu, 0x1F9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D44u;
label_1f9d44:
    // 0x1f9d44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d48: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x1F9D48u;
    SET_GPR_U32(ctx, 31, 0x1F9D50u);
    ctx->pc = 0x1F9D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D48u;
    // 0x1f9d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x1F9D48u, 0x1F9D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D50u;
label_1f9d50:
    // 0x1f9d50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f9d50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d54: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x1f9d54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x1f9d58: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1f9d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f9d5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9D5Cu;
    {
        const bool branch_taken_0x1f9d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D5Cu;
        // 0x1f9d60: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d5c) {
            ctx->pc = 0x1F9D6Cu;
            goto label_1f9d6c;
        }
    }
    ctx->pc = 0x1F9D64u;
    // 0x1f9d64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F9D64u;
    {
        const bool branch_taken_0x1f9d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D64u;
        // 0x1f9d68: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d64) {
            ctx->pc = 0x1F9DA0u;
            goto label_1f9da0;
        }
    }
    ctx->pc = 0x1F9D6Cu;
label_1f9d6c:
    // 0x1f9d6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F9D6Cu;
    {
        const bool branch_taken_0x1f9d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D6Cu;
        // 0x1f9d70: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d6c) {
            ctx->pc = 0x1F9DA0u;
            goto label_1f9da0;
        }
    }
    ctx->pc = 0x1F9D74u;
label_1f9d74:
    // 0x1f9d74: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F9D74u;
    SET_GPR_U32(ctx, 31, 0x1F9D7Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F9D74u, 0x1F9D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D7Cu;
label_1f9d7c:
    // 0x1f9d7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f9d7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9d84: 0x84620548  lh          $v0, 0x548($v1)
    ctx->pc = 0x1f9d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
    // 0x1f9d88: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1f9d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f9d8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9D8Cu;
    {
        const bool branch_taken_0x1f9d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D8Cu;
        // 0x1f9d90: 0x94640548  lhu         $a0, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d8c) {
            ctx->pc = 0x1F9D9Cu;
            goto label_1f9d9c;
        }
    }
    ctx->pc = 0x1F9D94u;
    // 0x1f9d94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9D94u;
    {
        const bool branch_taken_0x1f9d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D94u;
        // 0x1f9d98: 0xa464054a  sh          $a0, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d94) {
            ctx->pc = 0x1F9DA0u;
            goto label_1f9da0;
        }
    }
    ctx->pc = 0x1F9D9Cu;
label_1f9d9c:
    // 0x1f9d9c: 0xa465054a  sh          $a1, 0x54A($v1)
    ctx->pc = 0x1f9d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 5));
label_1f9da0:
    // 0x1f9da0: 0xc07e780  jal         func_1F9E00
    ctx->pc = 0x1F9DA0u;
    SET_GPR_U32(ctx, 31, 0x1F9DA8u);
    ctx->pc = 0x1F9DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DA0u;
    // 0x1f9da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E00u, 0x1F9DA0u, 0x1F9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DA8u;
label_1f9da8:
    // 0x1f9da8: 0xc07e79a  jal         func_1F9E68
    ctx->pc = 0x1F9DA8u;
    SET_GPR_U32(ctx, 31, 0x1F9DB0u);
    ctx->pc = 0x1F9DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DA8u;
    // 0x1f9dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E68u, 0x1F9DA8u, 0x1F9DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DB0u;
label_1f9db0:
    // 0x1f9db0: 0xc07e7ac  jal         func_1F9EB0
    ctx->pc = 0x1F9DB0u;
    SET_GPR_U32(ctx, 31, 0x1F9DB8u);
    ctx->pc = 0x1F9DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DB0u;
    // 0x1f9db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9EB0u, 0x1F9DB0u, 0x1F9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DB8u;
label_1f9db8:
    // 0x1f9db8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f9db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DC4u;
        // 0x1f9dc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9DCCu;
    // 0x1f9dcc: 0x0  nop
    ctx->pc = 0x1f9dccu;
    // NOP
    ctx->pc = 0x1f9dd0u;
}
