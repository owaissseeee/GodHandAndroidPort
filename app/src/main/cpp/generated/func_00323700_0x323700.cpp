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

// Function: func_00323700
// Address: 0x323700 - 0x323780
void func_00323700_0x323700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323700_0x323700");
#endif

    switch (ctx->pc) {
        case 0x32373cu: goto label_32373c;
        case 0x323744u: goto label_323744;
        case 0x323758u: goto label_323758;
        default: break;
    }

    ctx->pc = 0x323700u;

    // 0x323700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323704: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x323704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32370c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32370cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323714: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x323714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32371c: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x32371cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x323720: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x323720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x323724: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x323724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x323728: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x323728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x32372c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x323730: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x323730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x323734: 0xc0c9fc0  jal         func_327F00
    ctx->pc = 0x323734u;
    SET_GPR_U32(ctx, 31, 0x32373Cu);
    ctx->pc = 0x323738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323734u;
    // 0x323738: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327F00u, 0x323734u, 0x32373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32373Cu;
label_32373c:
    // 0x32373c: 0xc0ca026  jal         func_328098
    ctx->pc = 0x32373Cu;
    SET_GPR_U32(ctx, 31, 0x323744u);
    ctx->pc = 0x323740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32373Cu;
    // 0x323740: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x32373Cu, 0x323744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323744u;
label_323744:
    // 0x323744: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x323744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323748: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x323748u;
    {
        const bool branch_taken_0x323748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323748u;
        // 0x32374c: 0x1122c0  sll         $a0, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323748) {
            ctx->pc = 0x323760u;
            goto label_323760;
        }
    }
    ctx->pc = 0x323750u;
    // 0x323750: 0xc0ca006  jal         func_328018
    ctx->pc = 0x323750u;
    SET_GPR_U32(ctx, 31, 0x323758u);
    ctx->pc = 0x323754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323750u;
    // 0x323754: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328018u, 0x323750u, 0x323758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323758u;
label_323758:
    // 0x323758: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x323758u;
    {
        const bool branch_taken_0x323758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323758u;
        // 0x32375c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323758) {
            ctx->pc = 0x32376Cu;
            goto label_32376c;
        }
    }
    ctx->pc = 0x323760u;
label_323760:
    // 0x323760: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x323760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x323764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x323764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323768: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x323768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_32376c:
    // 0x32376c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32376cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323778: 0x3e00008  jr          $ra
    ctx->pc = 0x323778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323778u;
        // 0x32377c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323780u;
}
