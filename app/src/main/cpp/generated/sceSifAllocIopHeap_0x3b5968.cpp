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

// Function: sceSifAllocIopHeap
// Address: 0x3b5968 - 0x3b59d8
void sceSifAllocIopHeap_0x3b5968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifAllocIopHeap_0x3b5968");
#endif

    switch (ctx->pc) {
        case 0x3b59bcu: goto label_3b59bc;
        default: break;
    }

    ctx->pc = 0x3b5968u;

    // 0x3b5968: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b5968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b596c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b596cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b5970: 0x8c62aef4  lw          $v0, -0x510C($v1)
    ctx->pc = 0x3b5970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEF4u));
    // 0x3b5974: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b5974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5978: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b5978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b597c: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B597Cu;
    {
        const bool branch_taken_0x3b597c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B597Cu;
        // 0x3b5980: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b597c) {
            ctx->pc = 0x3B59C4u;
            goto label_3b59c4;
        }
    }
    ctx->pc = 0x3B5984u;
    // 0x3b5984: 0x3c070078  lui         $a3, 0x78
    ctx->pc = 0x3b5984u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)120 << 16));
    // 0x3b5988: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b5988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b598c: 0xace51840  sw          $a1, 0x1840($a3)
    ctx->pc = 0x3b598cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x781840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x781840u, _value); } while (0);
    // 0x3b5990: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b5990u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b5994: 0x248417c0  addiu       $a0, $a0, 0x17C0
    ctx->pc = 0x3b5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6080));
    // 0x3b5998: 0x24e71840  addiu       $a3, $a3, 0x1840
    ctx->pc = 0x3b5998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6208));
    // 0x3b599c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b599cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b59a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b59a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b59a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b59a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b59a8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3b59a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b59ac: 0x26091800  addiu       $t1, $s0, 0x1800
    ctx->pc = 0x3b59acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 6144));
    // 0x3b59b0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b59b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b59b4: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3B59B4u;
    SET_GPR_U32(ctx, 31, 0x3B59BCu);
    ctx->pc = 0x3B59B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B59B4u;
    // 0x3b59b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3B59B4u, 0x3B59BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B59BCu;
label_3b59bc:
    // 0x3b59bc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B59BCu;
    {
        const bool branch_taken_0x3b59bc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59BCu;
        // 0x3b59c0: 0x8e021800  lw          $v0, 0x1800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59bc) {
            ctx->pc = 0x3B59C8u;
            goto label_3b59c8;
        }
    }
    ctx->pc = 0x3B59C4u;
label_3b59c4:
    // 0x3b59c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b59c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b59c8:
    // 0x3b59c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b59c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b59cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b59ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b59d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B59D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59D0u;
        // 0x3b59d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B59D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B59D8u;
}
