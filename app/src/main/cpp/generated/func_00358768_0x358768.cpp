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

// Function: func_00358768
// Address: 0x358768 - 0x3587d0
void func_00358768_0x358768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358768_0x358768");
#endif

    switch (ctx->pc) {
        case 0x358768u: goto label_358768;
        case 0x35876cu: goto label_35876c;
        case 0x358770u: goto label_358770;
        case 0x358774u: goto label_358774;
        case 0x358778u: goto label_358778;
        case 0x35877cu: goto label_35877c;
        case 0x358780u: goto label_358780;
        case 0x358784u: goto label_358784;
        case 0x358788u: goto label_358788;
        case 0x35878cu: goto label_35878c;
        case 0x358790u: goto label_358790;
        case 0x358794u: goto label_358794;
        case 0x358798u: goto label_358798;
        case 0x35879cu: goto label_35879c;
        case 0x3587a0u: goto label_3587a0;
        case 0x3587a4u: goto label_3587a4;
        case 0x3587a8u: goto label_3587a8;
        case 0x3587acu: goto label_3587ac;
        case 0x3587b0u: goto label_3587b0;
        case 0x3587b4u: goto label_3587b4;
        case 0x3587b8u: goto label_3587b8;
        case 0x3587bcu: goto label_3587bc;
        case 0x3587c0u: goto label_3587c0;
        case 0x3587c4u: goto label_3587c4;
        case 0x3587c8u: goto label_3587c8;
        case 0x3587ccu: goto label_3587cc;
        default: break;
    }

    ctx->pc = 0x358768u;

label_358768:
    // 0x358768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35876c:
    // 0x35876c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_358770:
    // 0x358770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_358774:
    // 0x358774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x358774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358778:
    // 0x358778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x358778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_35877c:
    // 0x35877c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35877cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_358780:
    // 0x358780: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x358780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_358784:
    // 0x358784: 0x26300950  addiu       $s0, $s1, 0x950
    ctx->pc = 0x358784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
label_358788:
    // 0x358788: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x358788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_35878c:
    // 0x35878c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_358790:
    // 0x358790: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x358790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_358794:
    // 0x358794: 0xc0d6872  jal         func_35A1C8
label_358798:
    if (ctx->pc == 0x358798u) {
        ctx->pc = 0x358798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358794u;
        // 0x358798: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35879Cu;
        goto label_35879c;
    }
    ctx->pc = 0x358794u;
    SET_GPR_U32(ctx, 31, 0x35879Cu);
    ctx->pc = 0x358798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358794u;
    // 0x358798: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x358794u, 0x35879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35879Cu;
label_35879c:
    // 0x35879c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35879cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3587a0:
    // 0x3587a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3587a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3587a4:
    // 0x3587a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3587a8:
    if (ctx->pc == 0x3587A8u) {
        ctx->pc = 0x3587A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587A4u;
        // 0x3587a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3587ACu;
        goto label_3587ac;
    }
    ctx->pc = 0x3587A4u;
    {
        const bool branch_taken_0x3587a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587A4u;
        // 0x3587a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587a4) {
            ctx->pc = 0x3587B4u;
            goto label_3587b4;
        }
    }
    ctx->pc = 0x3587ACu;
label_3587ac:
    // 0x3587ac: 0x40f809  jalr        $v0
label_3587b0:
    if (ctx->pc == 0x3587B0u) {
        ctx->pc = 0x3587B4u;
        goto label_3587b4;
    }
    ctx->pc = 0x3587ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3587B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3587ACu, 0x3587B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3587B4u;
label_3587b4:
    // 0x3587b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3587b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3587b8:
    // 0x3587b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3587b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3587bc:
    // 0x3587bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3587bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3587c0:
    // 0x3587c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3587c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3587c4:
    // 0x3587c4: 0x3e00008  jr          $ra
label_3587c8:
    if (ctx->pc == 0x3587C8u) {
        ctx->pc = 0x3587C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587C4u;
        // 0x3587c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3587CCu;
        goto label_3587cc;
    }
    ctx->pc = 0x3587C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3587C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587C4u;
        // 0x3587c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3587C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3587CCu;
label_3587cc:
    // 0x3587cc: 0x0  nop
    ctx->pc = 0x3587ccu;
    // NOP
    ctx->pc = 0x3587d0u;
}
