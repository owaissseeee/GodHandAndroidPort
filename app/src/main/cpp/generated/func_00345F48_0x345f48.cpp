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

// Function: func_00345F48
// Address: 0x345f48 - 0x346078
void func_00345F48_0x345f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345F48_0x345f48");
#endif

    switch (ctx->pc) {
        case 0x345f6cu: goto label_345f6c;
        case 0x345f84u: goto label_345f84;
        case 0x345facu: goto label_345fac;
        case 0x345fccu: goto label_345fcc;
        case 0x345fe4u: goto label_345fe4;
        case 0x345ff8u: goto label_345ff8;
        case 0x346004u: goto label_346004;
        case 0x346014u: goto label_346014;
        case 0x346040u: goto label_346040;
        case 0x34604cu: goto label_34604c;
        case 0x346058u: goto label_346058;
        default: break;
    }

    ctx->pc = 0x345f48u;

    // 0x345f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x345f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x345f4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x345f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x345f50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345f54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x345f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x345f58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x345f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x345f5c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x345f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x345f60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x345f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x345f64: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x345F64u;
    SET_GPR_U32(ctx, 31, 0x345F6Cu);
    ctx->pc = 0x345F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F64u;
    // 0x345f68: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x345F64u, 0x345F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F6Cu;
label_345f6c:
    // 0x345f6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x345f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345f74: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345F74u;
    {
        const bool branch_taken_0x345f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x345F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F74u;
        // 0x345f78: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f74) {
            ctx->pc = 0x345F90u;
            goto label_345f90;
        }
    }
    ctx->pc = 0x345F7Cu;
    // 0x345f7c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x345F7Cu;
    SET_GPR_U32(ctx, 31, 0x345F84u);
    ctx->pc = 0x345F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F7Cu;
    // 0x345f80: 0x248480b0  addiu       $a0, $a0, -0x7F50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345F7Cu, 0x345F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F84u;
label_345f84:
    // 0x345f84: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x345F84u;
    {
        const bool branch_taken_0x345f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F84u;
        // 0x345f88: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f84) {
            ctx->pc = 0x346060u;
            goto label_346060;
        }
    }
    ctx->pc = 0x345F8Cu;
    // 0x345f8c: 0x0  nop
    ctx->pc = 0x345f8cu;
    // NOP
label_345f90:
    // 0x345f90: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x345f90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x345f94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345F94u;
    {
        const bool branch_taken_0x345f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F94u;
        // 0x345f98: 0x8e13003c  lw          $s3, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f94) {
            ctx->pc = 0x345FA4u;
            goto label_345fa4;
        }
    }
    ctx->pc = 0x345F9Cu;
    // 0x345f9c: 0x52400030  beql        $s2, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x345F9Cu;
    {
        const bool branch_taken_0x345f9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x345f9c) {
            ctx->pc = 0x345FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345F9Cu;
            // 0x345fa0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346060u;
            goto label_346060;
        }
    }
    ctx->pc = 0x345FA4u;
label_345fa4:
    // 0x345fa4: 0xc0d156e  jal         func_3455B8
    ctx->pc = 0x345FA4u;
    SET_GPR_U32(ctx, 31, 0x345FACu);
    ctx->pc = 0x3455B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3455B8u, 0x345FA4u, 0x345FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FACu;
label_345fac:
    // 0x345fac: 0x14510013  bne         $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x345FACu;
    {
        const bool branch_taken_0x345fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x345FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FACu;
        // 0x345fb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fac) {
            ctx->pc = 0x345FFCu;
            goto label_345ffc;
        }
    }
    ctx->pc = 0x345FB4u;
    // 0x345fb4: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x345fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x345fb8: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x345FB8u;
    {
        const bool branch_taken_0x345fb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x345fb8) {
            ctx->pc = 0x345FFCu;
            goto label_345ffc;
        }
    }
    ctx->pc = 0x345FC0u;
    // 0x345fc0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x345fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x345fc4: 0xc0d684a  jal         func_35A128
    ctx->pc = 0x345FC4u;
    SET_GPR_U32(ctx, 31, 0x345FCCu);
    ctx->pc = 0x345FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FC4u;
    // 0x345fc8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A128u, 0x345FC4u, 0x345FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FCCu;
label_345fcc:
    // 0x345fcc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x345FCCu;
    {
        const bool branch_taken_0x345fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FCCu;
        // 0x345fd0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fcc) {
            ctx->pc = 0x345FF0u;
            goto label_345ff0;
        }
    }
    ctx->pc = 0x345FD4u;
    // 0x345fd4: 0x54510009  bnel        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x345FD4u;
    {
        const bool branch_taken_0x345fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x345fd4) {
            ctx->pc = 0x345FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345FD4u;
            // 0x345fd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345FFCu;
            goto label_345ffc;
        }
    }
    ctx->pc = 0x345FDCu;
    // 0x345fdc: 0xc0d25e8  jal         func_3497A0
    ctx->pc = 0x345FDCu;
    SET_GPR_U32(ctx, 31, 0x345FE4u);
    ctx->pc = 0x345FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FDCu;
    // 0x345fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3497A0u, 0x345FDCu, 0x345FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FE4u;
label_345fe4:
    // 0x345fe4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x345FE4u;
    {
        const bool branch_taken_0x345fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FE4u;
        // 0x345fe8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fe4) {
            ctx->pc = 0x345FFCu;
            goto label_345ffc;
        }
    }
    ctx->pc = 0x345FECu;
    // 0x345fec: 0x0  nop
    ctx->pc = 0x345fecu;
    // NOP
label_345ff0:
    // 0x345ff0: 0xc0d25e8  jal         func_3497A0
    ctx->pc = 0x345FF0u;
    SET_GPR_U32(ctx, 31, 0x345FF8u);
    ctx->pc = 0x345FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FF0u;
    // 0x345ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3497A0u, 0x345FF0u, 0x345FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FF8u;
label_345ff8:
    // 0x345ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x345ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_345ffc:
    // 0x345ffc: 0xc0d5bd2  jal         func_356F48
    ctx->pc = 0x345FFCu;
    SET_GPR_U32(ctx, 31, 0x346004u);
    ctx->pc = 0x346000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FFCu;
    // 0x346000: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356F48u, 0x345FFCu, 0x346004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346004u;
label_346004:
    // 0x346004: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x346004u;
    {
        const bool branch_taken_0x346004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346004) {
            ctx->pc = 0x346008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346004u;
            // 0x346008: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346044u;
            goto label_346044;
        }
    }
    ctx->pc = 0x34600Cu;
    // 0x34600c: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x34600Cu;
    SET_GPR_U32(ctx, 31, 0x346014u);
    ctx->pc = 0x346010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34600Cu;
    // 0x346010: 0x2404feca  addiu       $a0, $zero, -0x136 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966986));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x34600Cu, 0x346014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346014u;
label_346014:
    // 0x346014: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x346014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x346018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34601c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34601Cu;
    {
        const bool branch_taken_0x34601c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x346020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34601Cu;
        // 0x346020: 0x246480d8  addiu       $a0, $v1, -0x7F28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34601c) {
            ctx->pc = 0x346030u;
            goto label_346030;
        }
    }
    ctx->pc = 0x346024u;
    // 0x346024: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x346024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x346028: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346028u;
    {
        const bool branch_taken_0x346028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346028u;
        // 0x34602c: 0x24458100  addiu       $a1, $v0, -0x7F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346028) {
            ctx->pc = 0x346038u;
            goto label_346038;
        }
    }
    ctx->pc = 0x346030u;
label_346030:
    // 0x346030: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x346030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x346034: 0x24458108  addiu       $a1, $v0, -0x7EF8
    ctx->pc = 0x346034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934792));
label_346038:
    // 0x346038: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x346038u;
    SET_GPR_U32(ctx, 31, 0x346040u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x346038u, 0x346040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346040u;
label_346040:
    // 0x346040: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x346040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_346044:
    // 0x346044: 0xc0d2154  jal         func_348550
    ctx->pc = 0x346044u;
    SET_GPR_U32(ctx, 31, 0x34604Cu);
    ctx->pc = 0x346048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346044u;
    // 0x346048: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348550u, 0x346044u, 0x34604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34604Cu;
label_34604c:
    // 0x34604c: 0x260402a4  addiu       $a0, $s0, 0x2A4
    ctx->pc = 0x34604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    // 0x346050: 0xc0d2154  jal         func_348550
    ctx->pc = 0x346050u;
    SET_GPR_U32(ctx, 31, 0x346058u);
    ctx->pc = 0x346054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346050u;
    // 0x346054: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348550u, 0x346050u, 0x346058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346058u;
label_346058:
    // 0x346058: 0xa2120072  sb          $s2, 0x72($s0)
    ctx->pc = 0x346058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 18));
    // 0x34605c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34605cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_346060:
    // 0x346060: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x346060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346064: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x346064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346068: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x346068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34606c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34606cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346070: 0x3e00008  jr          $ra
    ctx->pc = 0x346070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346070u;
        // 0x346074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346078u;
}
