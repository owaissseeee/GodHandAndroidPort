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

// Function: func_003468B8
// Address: 0x3468b8 - 0x346968
void func_003468B8_0x3468b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003468B8_0x3468b8");
#endif

    switch (ctx->pc) {
        case 0x3468d0u: goto label_3468d0;
        case 0x3468ecu: goto label_3468ec;
        case 0x3468f8u: goto label_3468f8;
        case 0x346914u: goto label_346914;
        default: break;
    }

    ctx->pc = 0x3468b8u;

    // 0x3468b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3468b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3468bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3468bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3468c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3468c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3468c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3468c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3468c8: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x3468C8u;
    SET_GPR_U32(ctx, 31, 0x3468D0u);
    ctx->pc = 0x3468CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3468C8u;
    // 0x3468cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x3468C8u, 0x3468D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3468D0u;
label_3468d0:
    // 0x3468d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3468d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3468d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3468d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3468d8: 0x2404fff4  addiu       $a0, $zero, -0xC
    ctx->pc = 0x3468d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x3468dc: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3468DCu;
    {
        const bool branch_taken_0x3468dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3468E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468DCu;
        // 0x3468e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3468dc) {
            ctx->pc = 0x346900u;
            goto label_346900;
        }
    }
    ctx->pc = 0x3468E4u;
    // 0x3468e4: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x3468E4u;
    SET_GPR_U32(ctx, 31, 0x3468ECu);
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x3468E4u, 0x3468ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3468ECu;
label_3468ec:
    // 0x3468ec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3468ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3468f0: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3468F0u;
    SET_GPR_U32(ctx, 31, 0x3468F8u);
    ctx->pc = 0x3468F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3468F0u;
    // 0x3468f4: 0x24848488  addiu       $a0, $a0, -0x7B78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3468F0u, 0x3468F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3468F8u;
label_3468f8:
    // 0x3468f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3468F8u;
    {
        const bool branch_taken_0x3468f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3468FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468F8u;
        // 0x3468fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3468f8) {
            ctx->pc = 0x34693Cu;
            goto label_34693c;
        }
    }
    ctx->pc = 0x346900u;
label_346900:
    // 0x346900: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x346900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x346904: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x346904u;
    {
        const bool branch_taken_0x346904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x346908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346904u;
        // 0x346908: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346904) {
            ctx->pc = 0x34693Cu;
            goto label_34693c;
        }
    }
    ctx->pc = 0x34690Cu;
    // 0x34690c: 0xc0d67a0  jal         func_359E80
    ctx->pc = 0x34690Cu;
    SET_GPR_U32(ctx, 31, 0x346914u);
    ctx->pc = 0x346910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34690Cu;
    // 0x346910: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359E80u, 0x34690Cu, 0x346914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346914u;
label_346914:
    // 0x346914: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x346914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x346918: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x346918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34691c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x346920: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x346920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x346924: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x346924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346928: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x346928u;
    {
        const bool branch_taken_0x346928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x34692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346928u;
        // 0x34692c: 0x223100a  movz        $v0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346928) {
            ctx->pc = 0x346938u;
            goto label_346938;
        }
    }
    ctx->pc = 0x346930u;
    // 0x346930: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x346930u;
    {
        const bool branch_taken_0x346930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x346934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346930u;
        // 0x346934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346930) {
            ctx->pc = 0x346940u;
            goto label_346940;
        }
    }
    ctx->pc = 0x346938u;
label_346938:
    // 0x346938: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x346938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34693c:
    // 0x34693c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34693cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346940:
    // 0x346940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346948: 0x3e00008  jr          $ra
    ctx->pc = 0x346948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346948u;
        // 0x34694c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346950u;
    // 0x346950: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346954: 0x0  nop
    ctx->pc = 0x346954u;
    // NOP
    // 0x346958: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x346958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34695c: 0x0  nop
    ctx->pc = 0x34695cu;
    // NOP
    // 0x346960: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x346960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x346964: 0x0  nop
    ctx->pc = 0x346964u;
    // NOP
    ctx->pc = 0x346968u;
}
