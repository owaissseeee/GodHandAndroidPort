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

// Function: func_00207EE0
// Address: 0x207ee0 - 0x208260
void func_00207EE0_0x207ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00207EE0_0x207ee0");
#endif

    switch (ctx->pc) {
        case 0x207f40u: goto label_207f40;
        case 0x207f58u: goto label_207f58;
        case 0x207f70u: goto label_207f70;
        case 0x207fa0u: goto label_207fa0;
        case 0x207fc0u: goto label_207fc0;
        case 0x207fd8u: goto label_207fd8;
        case 0x208024u: goto label_208024;
        case 0x208070u: goto label_208070;
        case 0x208088u: goto label_208088;
        case 0x2080a0u: goto label_2080a0;
        case 0x2080d8u: goto label_2080d8;
        case 0x2080f0u: goto label_2080f0;
        case 0x208108u: goto label_208108;
        case 0x20816cu: goto label_20816c;
        case 0x208184u: goto label_208184;
        case 0x208208u: goto label_208208;
        case 0x208230u: goto label_208230;
        case 0x208248u: goto label_208248;
        default: break;
    }

    ctx->pc = 0x207ee0u;

    // 0x207ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207ee4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x207ee8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x207ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x207eec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207ef4: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x207ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x207ef8: 0x2444fdf8  addiu       $a0, $v0, -0x208
    ctx->pc = 0x207ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x207efc: 0x2c830077  sltiu       $v1, $a0, 0x77
    ctx->pc = 0x207efcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)119) ? 1 : 0);
    // 0x207f00: 0x106000d1  beqz        $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x207F00u;
    {
        const bool branch_taken_0x207f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F00u;
        // 0x207f04: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f00) {
            ctx->pc = 0x208248u;
            goto label_208248;
        }
    }
    ctx->pc = 0x207F08u;
    // 0x207f08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x207f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x207f0c: 0x2442fb70  addiu       $v0, $v0, -0x490
    ctx->pc = 0x207f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966128));
    // 0x207f10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207f14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207f18: 0x800008  jr          $a0
    ctx->pc = 0x207F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207F20u: goto label_207f20;
            case 0x207F84u: goto label_207f84;
            case 0x207FA0u: goto label_207fa0;
            case 0x207FECu: goto label_207fec;
            case 0x208004u: goto label_208004;
            case 0x208038u: goto label_208038;
            case 0x208050u: goto label_208050;
            case 0x2080A0u: goto label_2080a0;
            case 0x2080B8u: goto label_2080b8;
            case 0x20811Cu: goto label_20811c;
            case 0x208134u: goto label_208134;
            case 0x20814Cu: goto label_20814c;
            case 0x20818Cu: goto label_20818c;
            case 0x2081A4u: goto label_2081a4;
            case 0x2081BCu: goto label_2081bc;
            case 0x2081D4u: goto label_2081d4;
            case 0x2081ECu: goto label_2081ec;
            case 0x208210u: goto label_208210;
            case 0x208248u: goto label_208248;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x207F20u;
label_207f20:
    // 0x207f20: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x207f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x207f24: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x207f24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x207f28: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x207f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x207f2c: 0x24050212  addiu       $a1, $zero, 0x212
    ctx->pc = 0x207f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
    // 0x207f30: 0x8c462438  lw          $a2, 0x2438($v0)
    ctx->pc = 0x207f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9272)));
    // 0x207f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f38: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x207F38u;
    SET_GPR_U32(ctx, 31, 0x207F40u);
    ctx->pc = 0x207F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F38u;
    // 0x207f3c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x207F38u, 0x207F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F40u;
label_207f40:
    // 0x207f40: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x207f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f48: 0x240503b8  addiu       $a1, $zero, 0x3B8
    ctx->pc = 0x207f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 952));
    // 0x207f4c: 0x8c66243c  lw          $a2, 0x243C($v1)
    ctx->pc = 0x207f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9276)));
    // 0x207f50: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x207F50u;
    SET_GPR_U32(ctx, 31, 0x207F58u);
    ctx->pc = 0x207F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F50u;
    // 0x207f54: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x207F50u, 0x207F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F58u;
label_207f58:
    // 0x207f58: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x207f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f60: 0x240503b9  addiu       $a1, $zero, 0x3B9
    ctx->pc = 0x207f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 953));
    // 0x207f64: 0x8c662440  lw          $a2, 0x2440($v1)
    ctx->pc = 0x207f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9280)));
    // 0x207f68: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x207F68u;
    SET_GPR_U32(ctx, 31, 0x207F70u);
    ctx->pc = 0x207F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F68u;
    // 0x207f6c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x207F68u, 0x207F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F70u;
label_207f70:
    // 0x207f70: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x207f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x207f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f78: 0x240503ba  addiu       $a1, $zero, 0x3BA
    ctx->pc = 0x207f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 954));
    // 0x207f7c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x207F7Cu;
    {
        const bool branch_taken_0x207f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F7Cu;
        // 0x207f80: 0x8c662444  lw          $a2, 0x2444($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f7c) {
            ctx->pc = 0x20817Cu;
            goto label_20817c;
        }
    }
    ctx->pc = 0x207F84u;
label_207f84:
    // 0x207f84: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x207f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x207f88: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x207f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x207f8c: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x207f90: 0x2405027a  addiu       $a1, $zero, 0x27A
    ctx->pc = 0x207f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
    // 0x207f94: 0x8cc21fa8  lw          $v0, 0x1FA8($a2)
    ctx->pc = 0x207f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8104)));
    // 0x207f98: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x207F98u;
    SET_GPR_U32(ctx, 31, 0x207FA0u);
    ctx->pc = 0x207F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F98u;
    // 0x207f9c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x207F98u, 0x207FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FA0u;
label_207fa0:
    // 0x207fa0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x207fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x207fa4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x207fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x207fa8: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x207fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x207fac: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x207facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x207fb0: 0x8c4624dc  lw          $a2, 0x24DC($v0)
    ctx->pc = 0x207fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9436)));
    // 0x207fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fb8: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x207FB8u;
    SET_GPR_U32(ctx, 31, 0x207FC0u);
    ctx->pc = 0x207FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FB8u;
    // 0x207fbc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x207FB8u, 0x207FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FC0u;
label_207fc0:
    // 0x207fc0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x207fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x207fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fc8: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x207fcc: 0x8c6624e0  lw          $a2, 0x24E0($v1)
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9440)));
    // 0x207fd0: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x207FD0u;
    SET_GPR_U32(ctx, 31, 0x207FD8u);
    ctx->pc = 0x207FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FD0u;
    // 0x207fd4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x207FD0u, 0x207FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FD8u;
label_207fd8:
    // 0x207fd8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x207fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x207fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fe0: 0x24050369  addiu       $a1, $zero, 0x369
    ctx->pc = 0x207fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
    // 0x207fe4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x207FE4u;
    {
        const bool branch_taken_0x207fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FE4u;
        // 0x207fe8: 0x8c6624e4  lw          $a2, 0x24E4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fe4) {
            ctx->pc = 0x20817Cu;
            goto label_20817c;
        }
    }
    ctx->pc = 0x207FECu;
label_207fec:
    // 0x207fec: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x207fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x207ff0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x207ff4: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x207ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x207ff8: 0x24050263  addiu       $a1, $zero, 0x263
    ctx->pc = 0x207ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    // 0x207ffc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x207FFCu;
    {
        const bool branch_taken_0x207ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FFCu;
        // 0x208000: 0x8cc23264  lw          $v0, 0x3264($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ffc) {
            ctx->pc = 0x208200u;
            goto label_208200;
        }
    }
    ctx->pc = 0x208004u;
label_208004:
    // 0x208004: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x208004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208008: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x208008u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x20800c: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x20800cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x208010: 0x24050266  addiu       $a1, $zero, 0x266
    ctx->pc = 0x208010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 614));
    // 0x208014: 0x8c463718  lw          $a2, 0x3718($v0)
    ctx->pc = 0x208014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14104)));
    // 0x208018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20801c: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x20801Cu;
    SET_GPR_U32(ctx, 31, 0x208024u);
    ctx->pc = 0x208020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20801Cu;
    // 0x208020: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x20801Cu, 0x208024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208024u;
label_208024:
    // 0x208024: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x208024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20802c: 0x2405037e  addiu       $a1, $zero, 0x37E
    ctx->pc = 0x20802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 894));
    // 0x208030: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x208030u;
    {
        const bool branch_taken_0x208030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208030u;
        // 0x208034: 0x8c66371c  lw          $a2, 0x371C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208030) {
            ctx->pc = 0x20817Cu;
            goto label_20817c;
        }
    }
    ctx->pc = 0x208038u;
label_208038:
    // 0x208038: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x208038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x20803c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x20803cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x208040: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x208040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x208044: 0x24050374  addiu       $a1, $zero, 0x374
    ctx->pc = 0x208044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 884));
    // 0x208048: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x208048u;
    {
        const bool branch_taken_0x208048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208048u;
        // 0x20804c: 0x8cc23034  lw          $v0, 0x3034($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208048) {
            ctx->pc = 0x208200u;
            goto label_208200;
        }
    }
    ctx->pc = 0x208050u;
label_208050:
    // 0x208050: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x208050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208054: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x208054u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x208058: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x208058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x20805c: 0x24050257  addiu       $a1, $zero, 0x257
    ctx->pc = 0x20805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x208060: 0x8c462590  lw          $a2, 0x2590($v0)
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9616)));
    // 0x208064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208068: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x208068u;
    SET_GPR_U32(ctx, 31, 0x208070u);
    ctx->pc = 0x20806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208068u;
    // 0x20806c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x208068u, 0x208070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208070u;
label_208070:
    // 0x208070: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x208070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208078: 0x24050259  addiu       $a1, $zero, 0x259
    ctx->pc = 0x208078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
    // 0x20807c: 0x8c662594  lw          $a2, 0x2594($v1)
    ctx->pc = 0x20807cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9620)));
    // 0x208080: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x208080u;
    SET_GPR_U32(ctx, 31, 0x208088u);
    ctx->pc = 0x208084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208080u;
    // 0x208084: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x208080u, 0x208088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208088u;
label_208088:
    // 0x208088: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x208088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x20808c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208090: 0x2405027f  addiu       $a1, $zero, 0x27F
    ctx->pc = 0x208090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x208094: 0x8c662598  lw          $a2, 0x2598($v1)
    ctx->pc = 0x208094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9624)));
    // 0x208098: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x208098u;
    SET_GPR_U32(ctx, 31, 0x2080A0u);
    ctx->pc = 0x20809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208098u;
    // 0x20809c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x208098u, 0x2080A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080A0u;
label_2080a0:
    // 0x2080a0: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x2080a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2080a4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2080a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2080a8: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x2080a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x2080ac: 0x24050367  addiu       $a1, $zero, 0x367
    ctx->pc = 0x2080acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 871));
    // 0x2080b0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2080B0u;
    {
        const bool branch_taken_0x2080b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080B0u;
        // 0x2080b4: 0x8cc21e64  lw          $v0, 0x1E64($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080b0) {
            ctx->pc = 0x208200u;
            goto label_208200;
        }
    }
    ctx->pc = 0x2080B8u;
label_2080b8:
    // 0x2080b8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2080b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2080bc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2080bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2080c0: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x2080c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x2080c4: 0x2405036a  addiu       $a1, $zero, 0x36A
    ctx->pc = 0x2080c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 874));
    // 0x2080c8: 0x8c462260  lw          $a2, 0x2260($v0)
    ctx->pc = 0x2080c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8800)));
    // 0x2080cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2080ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080d0: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x2080D0u;
    SET_GPR_U32(ctx, 31, 0x2080D8u);
    ctx->pc = 0x2080D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080D0u;
    // 0x2080d4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x2080D0u, 0x2080D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080D8u;
label_2080d8:
    // 0x2080d8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2080d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2080dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2080dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080e0: 0x2405036b  addiu       $a1, $zero, 0x36B
    ctx->pc = 0x2080e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 875));
    // 0x2080e4: 0x8c662264  lw          $a2, 0x2264($v1)
    ctx->pc = 0x2080e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8804)));
    // 0x2080e8: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x2080E8u;
    SET_GPR_U32(ctx, 31, 0x2080F0u);
    ctx->pc = 0x2080ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080E8u;
    // 0x2080ec: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x2080E8u, 0x2080F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080F0u;
label_2080f0:
    // 0x2080f0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2080f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2080f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2080f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080f8: 0x24050373  addiu       $a1, $zero, 0x373
    ctx->pc = 0x2080f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 883));
    // 0x2080fc: 0x8c662268  lw          $a2, 0x2268($v1)
    ctx->pc = 0x2080fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8808)));
    // 0x208100: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x208100u;
    SET_GPR_U32(ctx, 31, 0x208108u);
    ctx->pc = 0x208104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208100u;
    // 0x208104: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x208100u, 0x208108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208108u;
label_208108:
    // 0x208108: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x208108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x20810c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20810cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208110: 0x2405036e  addiu       $a1, $zero, 0x36E
    ctx->pc = 0x208110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
    // 0x208114: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x208114u;
    {
        const bool branch_taken_0x208114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208114u;
        // 0x208118: 0x8c66226c  lw          $a2, 0x226C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208114) {
            ctx->pc = 0x20817Cu;
            goto label_20817c;
        }
    }
    ctx->pc = 0x20811Cu;
label_20811c:
    // 0x20811c: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x20811cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208120: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x208120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x208124: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x208124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x208128: 0x2405036c  addiu       $a1, $zero, 0x36C
    ctx->pc = 0x208128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    // 0x20812c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x20812Cu;
    {
        const bool branch_taken_0x20812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20812Cu;
        // 0x208130: 0x8cc21510  lw          $v0, 0x1510($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20812c) {
            ctx->pc = 0x208200u;
            goto label_208200;
        }
    }
    ctx->pc = 0x208134u;
label_208134:
    // 0x208134: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x208134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208138: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x208138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x20813c: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x20813cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x208140: 0x2405037d  addiu       $a1, $zero, 0x37D
    ctx->pc = 0x208140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 893));
    // 0x208144: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x208144u;
    {
        const bool branch_taken_0x208144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208144u;
        // 0x208148: 0x8cc23c84  lw          $v0, 0x3C84($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 15492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208144) {
            ctx->pc = 0x208200u;
            goto label_208200;
        }
    }
    ctx->pc = 0x20814Cu;
label_20814c:
    // 0x20814c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x20814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208150: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x208150u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x208154: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x208154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x208158: 0x2405036f  addiu       $a1, $zero, 0x36F
    ctx->pc = 0x208158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 879));
    // 0x20815c: 0x8c462f08  lw          $a2, 0x2F08($v0)
    ctx->pc = 0x20815cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12040)));
    // 0x208160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208164: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x208164u;
    SET_GPR_U32(ctx, 31, 0x20816Cu);
    ctx->pc = 0x208168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208164u;
    // 0x208168: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x208164u, 0x20816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20816Cu;
label_20816c:
    // 0x20816c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x20816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208174: 0x2405037a  addiu       $a1, $zero, 0x37A
    ctx->pc = 0x208174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 890));
    // 0x208178: 0x8c662f0c  lw          $a2, 0x2F0C($v1)
    ctx->pc = 0x208178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12044)));
label_20817c:
    // 0x20817c: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x20817Cu;
    SET_GPR_U32(ctx, 31, 0x208184u);
    ctx->pc = 0x208180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20817Cu;
    // 0x208180: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x20817Cu, 0x208184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208184u;
label_208184:
    // 0x208184: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x208184u;
    {
        const bool branch_taken_0x208184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208184u;
        // 0x208188: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208184) {
            ctx->pc = 0x20824Cu;
            goto label_20824c;
        }
    }
    ctx->pc = 0x20818Cu;
label_20818c:
    // 0x20818c: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x20818cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208190: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x208190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x208194: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x208194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x208198: 0x24050370  addiu       $a1, $zero, 0x370
    ctx->pc = 0x208198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x20819c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20819Cu;
    {
        const bool branch_taken_0x20819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20819Cu;
        // 0x2081a0: 0x8cc21514  lw          $v0, 0x1514($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20819c) {
            ctx->pc = 0x208200u;
            goto label_208200;
        }
    }
    ctx->pc = 0x2081A4u;
label_2081a4:
    // 0x2081a4: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x2081a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2081a8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2081a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2081ac: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x2081acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x2081b0: 0x2405037f  addiu       $a1, $zero, 0x37F
    ctx->pc = 0x2081b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 895));
    // 0x2081b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2081B4u;
    {
        const bool branch_taken_0x2081b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081B4u;
        // 0x2081b8: 0x8cc21500  lw          $v0, 0x1500($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081b4) {
            ctx->pc = 0x208200u;
            goto label_208200;
        }
    }
    ctx->pc = 0x2081BCu;
label_2081bc:
    // 0x2081bc: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x2081bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2081c0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2081c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2081c4: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x2081c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x2081c8: 0x2405037f  addiu       $a1, $zero, 0x37F
    ctx->pc = 0x2081c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 895));
    // 0x2081cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2081CCu;
    {
        const bool branch_taken_0x2081cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081CCu;
        // 0x2081d0: 0x8cc21500  lw          $v0, 0x1500($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081cc) {
            ctx->pc = 0x208200u;
            goto label_208200;
        }
    }
    ctx->pc = 0x2081D4u;
label_2081d4:
    // 0x2081d4: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x2081d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2081d8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2081d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2081dc: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x2081dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x2081e0: 0x2405042a  addiu       $a1, $zero, 0x42A
    ctx->pc = 0x2081e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x2081e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2081E4u;
    {
        const bool branch_taken_0x2081e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081E4u;
        // 0x2081e8: 0x8cc23414  lw          $v0, 0x3414($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081e4) {
            ctx->pc = 0x208200u;
            goto label_208200;
        }
    }
    ctx->pc = 0x2081ECu;
label_2081ec:
    // 0x2081ec: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x2081ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2081f0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2081f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2081f4: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x2081f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x2081f8: 0x24050378  addiu       $a1, $zero, 0x378
    ctx->pc = 0x2081f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 888));
    // 0x2081fc: 0x8cc23508  lw          $v0, 0x3508($a2)
    ctx->pc = 0x2081fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13576)));
label_208200:
    // 0x208200: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x208200u;
    SET_GPR_U32(ctx, 31, 0x208208u);
    ctx->pc = 0x208204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208200u;
    // 0x208204: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x208200u, 0x208208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208208u;
label_208208:
    // 0x208208: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x208208u;
    {
        const bool branch_taken_0x208208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208208u;
        // 0x20820c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208208) {
            ctx->pc = 0x20824Cu;
            goto label_20824c;
        }
    }
    ctx->pc = 0x208210u;
label_208210:
    // 0x208210: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x208210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208214: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x208214u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x208218: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x208218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x20821c: 0x2405026b  addiu       $a1, $zero, 0x26B
    ctx->pc = 0x20821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
    // 0x208220: 0x8c463d28  lw          $a2, 0x3D28($v0)
    ctx->pc = 0x208220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15656)));
    // 0x208224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208228: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x208228u;
    SET_GPR_U32(ctx, 31, 0x208230u);
    ctx->pc = 0x20822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208228u;
    // 0x20822c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x208228u, 0x208230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208230u;
label_208230:
    // 0x208230: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x208230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208238: 0x2405026c  addiu       $a1, $zero, 0x26C
    ctx->pc = 0x208238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x20823c: 0x8c663d2c  lw          $a2, 0x3D2C($v1)
    ctx->pc = 0x20823cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15660)));
    // 0x208240: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x208240u;
    SET_GPR_U32(ctx, 31, 0x208248u);
    ctx->pc = 0x208244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208240u;
    // 0x208244: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x208240u, 0x208248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208248u;
label_208248:
    // 0x208248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x208248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20824c:
    // 0x20824c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20824cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208254: 0x3e00008  jr          $ra
    ctx->pc = 0x208254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208254u;
        // 0x208258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20825Cu;
    // 0x20825c: 0x0  nop
    ctx->pc = 0x20825cu;
    // NOP
    ctx->pc = 0x208260u;
}
