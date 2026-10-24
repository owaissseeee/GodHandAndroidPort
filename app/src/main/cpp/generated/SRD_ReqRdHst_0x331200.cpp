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

// Function: SRD_ReqRdHst
// Address: 0x331200 - 0x3312b0
void SRD_ReqRdHst_0x331200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SRD_ReqRdHst_0x331200");
#endif

    switch (ctx->pc) {
        case 0x33123cu: goto label_33123c;
        case 0x331288u: goto label_331288;
        default: break;
    }

    ctx->pc = 0x331200u;

    // 0x331200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33120c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331210: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x331210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331214: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x331214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x331218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33121c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33121cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x331220: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x331220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331224: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x331224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x331228: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x331228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33122c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x331230: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x331230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x331234: 0xc0ceda2  jal         func_33B688
    ctx->pc = 0x331234u;
    SET_GPR_U32(ctx, 31, 0x33123Cu);
    ctx->pc = 0x331238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331234u;
    // 0x331238: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B688u, 0x331234u, 0x33123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33123Cu;
label_33123c:
    // 0x33123c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x33123cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x331240: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x331240u;
    {
        const bool branch_taken_0x331240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331240u;
        // 0x331244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331240) {
            ctx->pc = 0x331258u;
            goto label_331258;
        }
    }
    ctx->pc = 0x331248u;
    // 0x331248: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x331248u;
    {
        const bool branch_taken_0x331248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331248u;
        // 0x33124c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331248) {
            ctx->pc = 0x331258u;
            goto label_331258;
        }
    }
    ctx->pc = 0x331250u;
    // 0x331250: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x331250u;
    {
        const bool branch_taken_0x331250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x331250) {
            ctx->pc = 0x331280u;
            goto label_331280;
        }
    }
    ctx->pc = 0x331258u;
label_331258:
    // 0x331258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33125c: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x33125cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x331260: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x331260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x331264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331268: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x331268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x33126c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x33126cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331270: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x331270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x331274: 0xfe130020  sd          $s3, 0x20($s0)
    ctx->pc = 0x331274u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 19));
    // 0x331278: 0xfe150028  sd          $s5, 0x28($s0)
    ctx->pc = 0x331278u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 21));
    // 0x33127c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33127cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_331280:
    // 0x331280: 0xc0cedae  jal         func_33B6B8
    ctx->pc = 0x331280u;
    SET_GPR_U32(ctx, 31, 0x331288u);
    ctx->pc = 0x33B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6B8u, 0x331280u, 0x331288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331288u;
label_331288:
    // 0x331288: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x331288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33128c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33128cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x331290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x331294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331298: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x331298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33129c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33129cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3312a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3312a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3312a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3312a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3312a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3312A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3312ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3312A8u;
        // 0x3312ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3312A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3312B0u;
}
