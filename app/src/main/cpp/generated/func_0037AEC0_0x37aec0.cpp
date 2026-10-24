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

// Function: func_0037AEC0
// Address: 0x37aec0 - 0x37b0e0
void func_0037AEC0_0x37aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037AEC0_0x37aec0");
#endif

    switch (ctx->pc) {
        case 0x37aefcu: goto label_37aefc;
        case 0x37af1cu: goto label_37af1c;
        case 0x37af3cu: goto label_37af3c;
        case 0x37af58u: goto label_37af58;
        case 0x37af74u: goto label_37af74;
        case 0x37af90u: goto label_37af90;
        case 0x37afacu: goto label_37afac;
        case 0x37afc8u: goto label_37afc8;
        case 0x37afe0u: goto label_37afe0;
        case 0x37affcu: goto label_37affc;
        case 0x37b018u: goto label_37b018;
        case 0x37b034u: goto label_37b034;
        case 0x37b050u: goto label_37b050;
        case 0x37b06cu: goto label_37b06c;
        case 0x37b0a8u: goto label_37b0a8;
        case 0x37b0c0u: goto label_37b0c0;
        default: break;
    }

    ctx->pc = 0x37aec0u;

    // 0x37aec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37aec4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37aec4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37aec8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37aecc: 0x24e7bb50  addiu       $a3, $a3, -0x44B0
    ctx->pc = 0x37aeccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949712));
    // 0x37aed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37aed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37aed4: 0x3c110077  lui         $s1, 0x77
    ctx->pc = 0x37aed4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)119 << 16));
    // 0x37aed8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37aed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aedc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37aedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37aee0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37aee4: 0x2631a790  addiu       $s1, $s1, -0x5870
    ctx->pc = 0x37aee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944656));
    // 0x37aee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37aeec: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37aef0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37aef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37aef4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AEF4u;
    SET_GPR_U32(ctx, 31, 0x37AEFCu);
    ctx->pc = 0x37AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AEF4u;
    // 0x37aef8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AEF4u, 0x37AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEFCu;
label_37aefc:
    // 0x37aefc: 0x2650015c  addiu       $s0, $s2, 0x15C
    ctx->pc = 0x37aefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 348));
    // 0x37af00: 0x8648015c  lh          $t0, 0x15C($s2)
    ctx->pc = 0x37af00u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x37af04: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37af04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37af08: 0x24e7bb68  addiu       $a3, $a3, -0x4498
    ctx->pc = 0x37af08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949736));
    // 0x37af0c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37af10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37af10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37af14: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AF14u;
    SET_GPR_U32(ctx, 31, 0x37AF1Cu);
    ctx->pc = 0x37AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF14u;
    // 0x37af18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AF14u, 0x37AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF1Cu;
label_37af1c:
    // 0x37af1c: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x37af1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37af20: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x37af20u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x37af24: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37af24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37af28: 0x24e7bb80  addiu       $a3, $a3, -0x4480
    ctx->pc = 0x37af28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949760));
    // 0x37af2c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37af30: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37af30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37af34: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AF34u;
    SET_GPR_U32(ctx, 31, 0x37AF3Cu);
    ctx->pc = 0x37AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF34u;
    // 0x37af38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AF34u, 0x37AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF3Cu;
label_37af3c:
    // 0x37af3c: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x37af3cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x37af40: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37af40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37af44: 0x24e7bb98  addiu       $a3, $a3, -0x4468
    ctx->pc = 0x37af44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949784));
    // 0x37af48: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37af4c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x37af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37af50: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AF50u;
    SET_GPR_U32(ctx, 31, 0x37AF58u);
    ctx->pc = 0x37AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF50u;
    // 0x37af54: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AF50u, 0x37AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF58u;
label_37af58:
    // 0x37af58: 0x86080008  lh          $t0, 0x8($s0)
    ctx->pc = 0x37af58u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37af5c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37af5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37af60: 0x24e7bbb0  addiu       $a3, $a3, -0x4450
    ctx->pc = 0x37af60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949808));
    // 0x37af64: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37af64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37af68: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37af68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37af6c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AF6Cu;
    SET_GPR_U32(ctx, 31, 0x37AF74u);
    ctx->pc = 0x37AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF6Cu;
    // 0x37af70: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AF6Cu, 0x37AF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF74u;
label_37af74:
    // 0x37af74: 0x8608000a  lh          $t0, 0xA($s0)
    ctx->pc = 0x37af74u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x37af78: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37af78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37af7c: 0x24e7bbc8  addiu       $a3, $a3, -0x4438
    ctx->pc = 0x37af7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949832));
    // 0x37af80: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37af80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37af84: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x37af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x37af88: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AF88u;
    SET_GPR_U32(ctx, 31, 0x37AF90u);
    ctx->pc = 0x37AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF88u;
    // 0x37af8c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AF88u, 0x37AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF90u;
label_37af90:
    // 0x37af90: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x37af90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37af94: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37af94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37af98: 0x24e7bbe0  addiu       $a3, $a3, -0x4420
    ctx->pc = 0x37af98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949856));
    // 0x37af9c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37afa0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x37afa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x37afa4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AFA4u;
    SET_GPR_U32(ctx, 31, 0x37AFACu);
    ctx->pc = 0x37AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFA4u;
    // 0x37afa8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AFA4u, 0x37AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFACu;
label_37afac:
    // 0x37afac: 0x8608000e  lh          $t0, 0xE($s0)
    ctx->pc = 0x37afacu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x37afb0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37afb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37afb4: 0x24e7bbf8  addiu       $a3, $a3, -0x4408
    ctx->pc = 0x37afb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949880));
    // 0x37afb8: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37afbc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x37afbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37afc0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AFC0u;
    SET_GPR_U32(ctx, 31, 0x37AFC8u);
    ctx->pc = 0x37AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFC0u;
    // 0x37afc4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AFC0u, 0x37AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFC8u;
label_37afc8:
    // 0x37afc8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37afc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37afcc: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37afd0: 0x24e7bc10  addiu       $a3, $a3, -0x43F0
    ctx->pc = 0x37afd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949904));
    // 0x37afd4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x37afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37afd8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AFD8u;
    SET_GPR_U32(ctx, 31, 0x37AFE0u);
    ctx->pc = 0x37AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFD8u;
    // 0x37afdc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AFD8u, 0x37AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFE0u;
label_37afe0:
    // 0x37afe0: 0x8628003a  lh          $t0, 0x3A($s1)
    ctx->pc = 0x37afe0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x37afe4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37afe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37afe8: 0x24e7bc28  addiu       $a3, $a3, -0x43D8
    ctx->pc = 0x37afe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949928));
    // 0x37afec: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37afecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37aff0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x37aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37aff4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37AFF4u;
    SET_GPR_U32(ctx, 31, 0x37AFFCu);
    ctx->pc = 0x37AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFF4u;
    // 0x37aff8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37AFF4u, 0x37AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFFCu;
label_37affc:
    // 0x37affc: 0x8628003c  lh          $t0, 0x3C($s1)
    ctx->pc = 0x37affcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x37b000: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b004: 0x24e7bc40  addiu       $a3, $a3, -0x43C0
    ctx->pc = 0x37b004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949952));
    // 0x37b008: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37b008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37b00c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x37b00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37b010: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B010u;
    SET_GPR_U32(ctx, 31, 0x37B018u);
    ctx->pc = 0x37B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B010u;
    // 0x37b014: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B010u, 0x37B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B018u;
label_37b018:
    // 0x37b018: 0x8628003e  lh          $t0, 0x3E($s1)
    ctx->pc = 0x37b018u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x37b01c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b01cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b020: 0x24e7bc58  addiu       $a3, $a3, -0x43A8
    ctx->pc = 0x37b020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949976));
    // 0x37b024: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37b024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37b028: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x37b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x37b02c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B02Cu;
    SET_GPR_U32(ctx, 31, 0x37B034u);
    ctx->pc = 0x37B030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B02Cu;
    // 0x37b030: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B02Cu, 0x37B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B034u;
label_37b034:
    // 0x37b034: 0x86280040  lh          $t0, 0x40($s1)
    ctx->pc = 0x37b034u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x37b038: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b038u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b03c: 0x24e7bc70  addiu       $a3, $a3, -0x4390
    ctx->pc = 0x37b03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950000));
    // 0x37b040: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37b044: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x37b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x37b048: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B048u;
    SET_GPR_U32(ctx, 31, 0x37B050u);
    ctx->pc = 0x37B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B048u;
    // 0x37b04c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B048u, 0x37B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B050u;
label_37b050:
    // 0x37b050: 0x86280042  lh          $t0, 0x42($s1)
    ctx->pc = 0x37b050u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x37b054: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b054u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b058: 0x24e7bc88  addiu       $a3, $a3, -0x4378
    ctx->pc = 0x37b058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950024));
    // 0x37b05c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37b060: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x37b060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x37b064: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B064u;
    SET_GPR_U32(ctx, 31, 0x37B06Cu);
    ctx->pc = 0x37B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B064u;
    // 0x37b068: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B064u, 0x37B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B06Cu;
label_37b06c:
    // 0x37b06c: 0x82420026  lb          $v0, 0x26($s2)
    ctx->pc = 0x37b06cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x37b070: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x37b070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x37b074: 0x24632638  addiu       $v1, $v1, 0x2638
    ctx->pc = 0x37b074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9784));
    // 0x37b078: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b078u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b07c: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x37b07cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37b080: 0x24e7bca0  addiu       $a3, $a3, -0x4360
    ctx->pc = 0x37b080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950048));
    // 0x37b084: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x37b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x37b088: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x37b088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b08c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b090: 0x84500006  lh          $s0, 0x6($v0)
    ctx->pc = 0x37b090u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x37b094: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x37b094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x37b098: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x37b098u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x37b09c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x37b09cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37b0a0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B0A0u;
    SET_GPR_U32(ctx, 31, 0x37B0A8u);
    ctx->pc = 0x37B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B0A0u;
    // 0x37b0a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B0A0u, 0x37B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B0A8u;
label_37b0a8:
    // 0x37b0a8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b0ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37b0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b0b0: 0x24e7bca8  addiu       $a3, $a3, -0x4358
    ctx->pc = 0x37b0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950056));
    // 0x37b0b4: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x37b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x37b0b8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B0B8u;
    SET_GPR_U32(ctx, 31, 0x37B0C0u);
    ctx->pc = 0x37B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B0B8u;
    // 0x37b0bc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B0B8u, 0x37B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B0C0u;
label_37b0c0:
    // 0x37b0c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37b0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37b0c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37b0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b0c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37b0c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b0cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37b0ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x37B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B0D4u;
        // 0x37b0d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B0DCu;
    // 0x37b0dc: 0x0  nop
    ctx->pc = 0x37b0dcu;
    // NOP
    ctx->pc = 0x37b0e0u;
}
