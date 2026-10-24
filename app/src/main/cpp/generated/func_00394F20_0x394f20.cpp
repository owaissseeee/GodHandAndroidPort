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

// Function: func_00394F20
// Address: 0x394f20 - 0x395058
void func_00394F20_0x394f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00394F20_0x394f20");
#endif

    switch (ctx->pc) {
        case 0x394f20u: goto label_394f20;
        case 0x394f24u: goto label_394f24;
        case 0x394f28u: goto label_394f28;
        case 0x394f2cu: goto label_394f2c;
        case 0x394f30u: goto label_394f30;
        case 0x394f34u: goto label_394f34;
        case 0x394f38u: goto label_394f38;
        case 0x394f3cu: goto label_394f3c;
        case 0x394f40u: goto label_394f40;
        case 0x394f44u: goto label_394f44;
        case 0x394f48u: goto label_394f48;
        case 0x394f4cu: goto label_394f4c;
        case 0x394f50u: goto label_394f50;
        case 0x394f54u: goto label_394f54;
        case 0x394f58u: goto label_394f58;
        case 0x394f5cu: goto label_394f5c;
        case 0x394f60u: goto label_394f60;
        case 0x394f64u: goto label_394f64;
        case 0x394f68u: goto label_394f68;
        case 0x394f6cu: goto label_394f6c;
        case 0x394f70u: goto label_394f70;
        case 0x394f74u: goto label_394f74;
        case 0x394f78u: goto label_394f78;
        case 0x394f7cu: goto label_394f7c;
        case 0x394f80u: goto label_394f80;
        case 0x394f84u: goto label_394f84;
        case 0x394f88u: goto label_394f88;
        case 0x394f8cu: goto label_394f8c;
        case 0x394f90u: goto label_394f90;
        case 0x394f94u: goto label_394f94;
        case 0x394f98u: goto label_394f98;
        case 0x394f9cu: goto label_394f9c;
        case 0x394fa0u: goto label_394fa0;
        case 0x394fa4u: goto label_394fa4;
        case 0x394fa8u: goto label_394fa8;
        case 0x394facu: goto label_394fac;
        case 0x394fb0u: goto label_394fb0;
        case 0x394fb4u: goto label_394fb4;
        case 0x394fb8u: goto label_394fb8;
        case 0x394fbcu: goto label_394fbc;
        case 0x394fc0u: goto label_394fc0;
        case 0x394fc4u: goto label_394fc4;
        case 0x394fc8u: goto label_394fc8;
        case 0x394fccu: goto label_394fcc;
        case 0x394fd0u: goto label_394fd0;
        case 0x394fd4u: goto label_394fd4;
        case 0x394fd8u: goto label_394fd8;
        case 0x394fdcu: goto label_394fdc;
        case 0x394fe0u: goto label_394fe0;
        case 0x394fe4u: goto label_394fe4;
        case 0x394fe8u: goto label_394fe8;
        case 0x394fecu: goto label_394fec;
        case 0x394ff0u: goto label_394ff0;
        case 0x394ff4u: goto label_394ff4;
        case 0x394ff8u: goto label_394ff8;
        case 0x394ffcu: goto label_394ffc;
        case 0x395000u: goto label_395000;
        case 0x395004u: goto label_395004;
        case 0x395008u: goto label_395008;
        case 0x39500cu: goto label_39500c;
        case 0x395010u: goto label_395010;
        case 0x395014u: goto label_395014;
        case 0x395018u: goto label_395018;
        case 0x39501cu: goto label_39501c;
        case 0x395020u: goto label_395020;
        case 0x395024u: goto label_395024;
        case 0x395028u: goto label_395028;
        case 0x39502cu: goto label_39502c;
        case 0x395030u: goto label_395030;
        case 0x395034u: goto label_395034;
        case 0x395038u: goto label_395038;
        case 0x39503cu: goto label_39503c;
        case 0x395040u: goto label_395040;
        case 0x395044u: goto label_395044;
        case 0x395048u: goto label_395048;
        case 0x39504cu: goto label_39504c;
        case 0x395050u: goto label_395050;
        case 0x395054u: goto label_395054;
        default: break;
    }

    ctx->pc = 0x394f20u;

label_394f20:
    // 0x394f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x394f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_394f24:
    // 0x394f24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x394f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_394f28:
    // 0x394f28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x394f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_394f2c:
    // 0x394f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394f30:
    // 0x394f30: 0x8c43852c  lw          $v1, -0x7AD4($v0)
    ctx->pc = 0x394f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935852)));
label_394f34:
    // 0x394f34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x394f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_394f38:
    // 0x394f38: 0x2444852c  addiu       $a0, $v0, -0x7AD4
    ctx->pc = 0x394f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935852));
label_394f3c:
    // 0x394f3c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x394f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_394f40:
    // 0x394f40: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_394f44:
    if (ctx->pc == 0x394F44u) {
        ctx->pc = 0x394F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F40u;
        // 0x394f44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F48u;
        goto label_394f48;
    }
    ctx->pc = 0x394F40u;
    {
        const bool branch_taken_0x394f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F40u;
        // 0x394f44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f40) {
            ctx->pc = 0x394F70u;
            goto label_394f70;
        }
    }
    ctx->pc = 0x394F48u;
label_394f48:
    // 0x394f48: 0x10700007  beq         $v1, $s0, . + 4 + (0x7 << 2)
label_394f4c:
    if (ctx->pc == 0x394F4Cu) {
        ctx->pc = 0x394F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F48u;
        // 0x394f4c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F50u;
        goto label_394f50;
    }
    ctx->pc = 0x394F48u;
    {
        const bool branch_taken_0x394f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x394F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F48u;
        // 0x394f4c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f48) {
            ctx->pc = 0x394F68u;
            goto label_394f68;
        }
    }
    ctx->pc = 0x394F50u;
label_394f50:
    // 0x394f50: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x394f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_394f54:
    // 0x394f54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_394f58:
    if (ctx->pc == 0x394F58u) {
        ctx->pc = 0x394F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F54u;
        // 0x394f58: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F5Cu;
        goto label_394f5c;
    }
    ctx->pc = 0x394F54u;
    {
        const bool branch_taken_0x394f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F54u;
        // 0x394f58: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f54) {
            ctx->pc = 0x394F70u;
            goto label_394f70;
        }
    }
    ctx->pc = 0x394F5Cu;
label_394f5c:
    // 0x394f5c: 0x0  nop
    ctx->pc = 0x394f5cu;
    // NOP
label_394f60:
    // 0x394f60: 0x1470fffb  bne         $v1, $s0, . + 4 + (-0x5 << 2)
label_394f64:
    if (ctx->pc == 0x394F64u) {
        ctx->pc = 0x394F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F60u;
        // 0x394f64: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F68u;
        goto label_394f68;
    }
    ctx->pc = 0x394F60u;
    {
        const bool branch_taken_0x394f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x394F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F60u;
        // 0x394f64: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f60) {
            ctx->pc = 0x394F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394f50;
        }
    }
    ctx->pc = 0x394F68u;
label_394f68:
    // 0x394f68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_394f6c:
    if (ctx->pc == 0x394F6Cu) {
        ctx->pc = 0x394F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F68u;
        // 0x394f6c: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F70u;
        goto label_394f70;
    }
    ctx->pc = 0x394F68u;
    {
        const bool branch_taken_0x394f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394f68) {
            ctx->pc = 0x394F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394F68u;
            // 0x394f6c: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F78u;
            goto label_394f78;
        }
    }
    ctx->pc = 0x394F70u;
label_394f70:
    // 0x394f70: 0x1000002d  b           . + 4 + (0x2D << 2)
label_394f74:
    if (ctx->pc == 0x394F74u) {
        ctx->pc = 0x394F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F70u;
        // 0x394f74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F78u;
        goto label_394f78;
    }
    ctx->pc = 0x394F70u;
    {
        const bool branch_taken_0x394f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F70u;
        // 0x394f74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f70) {
            ctx->pc = 0x395028u;
            goto label_395028;
        }
    }
    ctx->pc = 0x394F78u;
label_394f78:
    // 0x394f78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x394f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_394f7c:
    // 0x394f7c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x394f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_394f80:
    // 0x394f80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_394f84:
    if (ctx->pc == 0x394F84u) {
        ctx->pc = 0x394F88u;
        goto label_394f88;
    }
    ctx->pc = 0x394F80u;
    {
        const bool branch_taken_0x394f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394f80) {
            ctx->pc = 0x394F90u;
            goto label_394f90;
        }
    }
    ctx->pc = 0x394F88u;
label_394f88:
    // 0x394f88: 0x40f809  jalr        $v0
label_394f8c:
    if (ctx->pc == 0x394F8Cu) {
        ctx->pc = 0x394F90u;
        goto label_394f90;
    }
    ctx->pc = 0x394F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394F90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394F88u, 0x394F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394F90u;
label_394f90:
    // 0x394f90: 0xc0e5340  jal         func_394D00
label_394f94:
    if (ctx->pc == 0x394F94u) {
        ctx->pc = 0x394F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F90u;
        // 0x394f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F98u;
        goto label_394f98;
    }
    ctx->pc = 0x394F90u;
    SET_GPR_U32(ctx, 31, 0x394F98u);
    ctx->pc = 0x394F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394F90u;
    // 0x394f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394D00u, 0x394F90u, 0x394F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F98u;
label_394f98:
    // 0x394f98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x394f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394f9c:
    // 0x394f9c: 0x6400022  bltz        $s2, . + 4 + (0x22 << 2)
label_394fa0:
    if (ctx->pc == 0x394FA0u) {
        ctx->pc = 0x394FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F9Cu;
        // 0x394fa0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FA4u;
        goto label_394fa4;
    }
    ctx->pc = 0x394F9Cu;
    {
        const bool branch_taken_0x394f9c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x394FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F9Cu;
        // 0x394fa0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f9c) {
            ctx->pc = 0x395028u;
            goto label_395028;
        }
    }
    ctx->pc = 0x394FA4u;
label_394fa4:
    // 0x394fa4: 0xc0e5470  jal         func_3951C0
label_394fa8:
    if (ctx->pc == 0x394FA8u) {
        ctx->pc = 0x394FACu;
        goto label_394fac;
    }
    ctx->pc = 0x394FA4u;
    SET_GPR_U32(ctx, 31, 0x394FACu);
    ctx->pc = 0x3951C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951C0u, 0x394FA4u, 0x394FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394FACu;
label_394fac:
    // 0x394fac: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x394facu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_394fb0:
    // 0x394fb0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_394fb4:
    if (ctx->pc == 0x394FB4u) {
        ctx->pc = 0x394FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FB0u;
        // 0x394fb4: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FB8u;
        goto label_394fb8;
    }
    ctx->pc = 0x394FB0u;
    {
        const bool branch_taken_0x394fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FB0u;
        // 0x394fb4: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fb0) {
            ctx->pc = 0x394FDCu;
            goto label_394fdc;
        }
    }
    ctx->pc = 0x394FB8u;
label_394fb8:
    // 0x394fb8: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x394fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_394fbc:
    // 0x394fbc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_394fc0:
    if (ctx->pc == 0x394FC0u) {
        ctx->pc = 0x394FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FBCu;
        // 0x394fc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FC4u;
        goto label_394fc4;
    }
    ctx->pc = 0x394FBCu;
    {
        const bool branch_taken_0x394fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394fbc) {
            ctx->pc = 0x394FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394FBCu;
            // 0x394fc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394FD4u;
            goto label_394fd4;
        }
    }
    ctx->pc = 0x394FC4u;
label_394fc4:
    // 0x394fc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x394fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_394fc8:
    // 0x394fc8: 0xc0e519a  jal         func_394668
label_394fcc:
    if (ctx->pc == 0x394FCCu) {
        ctx->pc = 0x394FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FC8u;
        // 0x394fcc: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FD0u;
        goto label_394fd0;
    }
    ctx->pc = 0x394FC8u;
    SET_GPR_U32(ctx, 31, 0x394FD0u);
    ctx->pc = 0x394FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394FC8u;
    // 0x394fcc: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394668u, 0x394FC8u, 0x394FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394FD0u;
label_394fd0:
    // 0x394fd0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x394fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_394fd4:
    // 0x394fd4: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
label_394fd8:
    if (ctx->pc == 0x394FD8u) {
        ctx->pc = 0x394FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FD4u;
        // 0x394fd8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FDCu;
        goto label_394fdc;
    }
    ctx->pc = 0x394FD4u;
    {
        const bool branch_taken_0x394fd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x394FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FD4u;
        // 0x394fd8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fd4) {
            ctx->pc = 0x394FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394fb8;
        }
    }
    ctx->pc = 0x394FDCu;
label_394fdc:
    // 0x394fdc: 0xc0e5460  jal         func_395180
label_394fe0:
    if (ctx->pc == 0x394FE0u) {
        ctx->pc = 0x394FE4u;
        goto label_394fe4;
    }
    ctx->pc = 0x394FDCu;
    SET_GPR_U32(ctx, 31, 0x394FE4u);
    ctx->pc = 0x395180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395180u, 0x394FDCu, 0x394FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394FE4u;
label_394fe4:
    // 0x394fe4: 0xc0e5474  jal         func_3951D0
label_394fe8:
    if (ctx->pc == 0x394FE8u) {
        ctx->pc = 0x394FECu;
        goto label_394fec;
    }
    ctx->pc = 0x394FE4u;
    SET_GPR_U32(ctx, 31, 0x394FECu);
    ctx->pc = 0x3951D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D0u, 0x394FE4u, 0x394FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394FECu;
label_394fec:
    // 0x394fec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x394fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_394ff0:
    // 0x394ff0: 0x8c638528  lw          $v1, -0x7AD8($v1)
    ctx->pc = 0x394ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935848)));
label_394ff4:
    // 0x394ff4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_394ff8:
    if (ctx->pc == 0x394FF8u) {
        ctx->pc = 0x394FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FF4u;
        // 0x394ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FFCu;
        goto label_394ffc;
    }
    ctx->pc = 0x394FF4u;
    {
        const bool branch_taken_0x394ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x394FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FF4u;
        // 0x394ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ff4) {
            ctx->pc = 0x39500Cu;
            goto label_39500c;
        }
    }
    ctx->pc = 0x394FFCu;
label_394ffc:
    // 0x394ffc: 0xc0e546c  jal         func_3951B0
label_395000:
    if (ctx->pc == 0x395000u) {
        ctx->pc = 0x395004u;
        goto label_395004;
    }
    ctx->pc = 0x394FFCu;
    SET_GPR_U32(ctx, 31, 0x395004u);
    ctx->pc = 0x3951B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951B0u, 0x394FFCu, 0x395004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395004u;
label_395004:
    // 0x395004: 0x10000008  b           . + 4 + (0x8 << 2)
label_395008:
    if (ctx->pc == 0x395008u) {
        ctx->pc = 0x395008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395004u;
        // 0x395008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39500Cu;
        goto label_39500c;
    }
    ctx->pc = 0x395004u;
    {
        const bool branch_taken_0x395004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395004u;
        // 0x395008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395004) {
            ctx->pc = 0x395028u;
            goto label_395028;
        }
    }
    ctx->pc = 0x39500Cu;
label_39500c:
    // 0x39500c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_395010:
    if (ctx->pc == 0x395010u) {
        ctx->pc = 0x395010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39500Cu;
        // 0x395010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395014u;
        goto label_395014;
    }
    ctx->pc = 0x39500Cu;
    {
        const bool branch_taken_0x39500c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x395010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39500Cu;
        // 0x395010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39500c) {
            ctx->pc = 0x395028u;
            goto label_395028;
        }
    }
    ctx->pc = 0x395014u;
label_395014:
    // 0x395014: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x395014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_395018:
    // 0x395018: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x395018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39501c:
    // 0x39501c: 0xc0e9a88  jal         func_3A6A20
label_395020:
    if (ctx->pc == 0x395020u) {
        ctx->pc = 0x395020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39501Cu;
        // 0x395020: 0x2484dc00  addiu       $a0, $a0, -0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395024u;
        goto label_395024;
    }
    ctx->pc = 0x39501Cu;
    SET_GPR_U32(ctx, 31, 0x395024u);
    ctx->pc = 0x395020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39501Cu;
    // 0x395020: 0x2484dc00  addiu       $a0, $a0, -0x2400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x39501Cu, 0x395024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395024u;
label_395024:
    // 0x395024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x395024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395028:
    // 0x395028: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x395028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39502c:
    // 0x39502c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39502cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_395030:
    // 0x395030: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x395030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_395034:
    // 0x395034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395038:
    // 0x395038: 0x3e00008  jr          $ra
label_39503c:
    if (ctx->pc == 0x39503Cu) {
        ctx->pc = 0x39503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395038u;
        // 0x39503c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395040u;
        goto label_395040;
    }
    ctx->pc = 0x395038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395038u;
        // 0x39503c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395040u;
label_395040:
    // 0x395040: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x395040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_395044:
    // 0x395044: 0x0  nop
    ctx->pc = 0x395044u;
    // NOP
label_395048:
    // 0x395048: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39504c:
    // 0x39504c: 0x0  nop
    ctx->pc = 0x39504cu;
    // NOP
label_395050:
    // 0x395050: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x395050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_395054:
    // 0x395054: 0x0  nop
    ctx->pc = 0x395054u;
    // NOP
    ctx->pc = 0x395058u;
}
