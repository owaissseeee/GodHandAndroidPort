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

// Function: ADXPS2_LoadFcacheDvd
// Address: 0x3291b8 - 0x329260
void ADXPS2_LoadFcacheDvd_0x3291b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXPS2_LoadFcacheDvd_0x3291b8");
#endif

    switch (ctx->pc) {
        case 0x3291e4u: goto label_3291e4;
        case 0x329200u: goto label_329200;
        default: break;
    }

    ctx->pc = 0x3291b8u;

    // 0x3291b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3291b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3291bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3291bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3291c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3291c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3291c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3291C8u;
    {
        const bool branch_taken_0x3291c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3291CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291C8u;
        // 0x3291cc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291c8) {
            ctx->pc = 0x3291F0u;
            goto label_3291f0;
        }
    }
    ctx->pc = 0x3291D0u;
    // 0x3291d0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x3291d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3291d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3291d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3291d8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3291d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3291dc: 0xc0ccf38  jal         func_333CE0
    ctx->pc = 0x3291DCu;
    SET_GPR_U32(ctx, 31, 0x3291E4u);
    ctx->pc = 0x3291E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291DCu;
    // 0x3291e0: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333CE0u, 0x3291DCu, 0x3291E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291E4u;
label_3291e4:
    // 0x3291e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3291E4u;
    {
        const bool branch_taken_0x3291e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3291E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291E4u;
        // 0x3291e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291e4) {
            ctx->pc = 0x329200u;
            goto label_329200;
        }
    }
    ctx->pc = 0x3291ECu;
    // 0x3291ec: 0x0  nop
    ctx->pc = 0x3291ecu;
    // NOP
label_3291f0:
    // 0x3291f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3291f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3291f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291f8: 0xc0ccf38  jal         func_333CE0
    ctx->pc = 0x3291F8u;
    SET_GPR_U32(ctx, 31, 0x329200u);
    ctx->pc = 0x3291FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291F8u;
    // 0x3291fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333CE0u, 0x3291F8u, 0x329200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329200u;
label_329200:
    // 0x329200: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x329200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329208: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x329208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32920c: 0x3e00008  jr          $ra
    ctx->pc = 0x32920Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32920Cu;
        // 0x329210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32920Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329214u;
    // 0x329214: 0x0  nop
    ctx->pc = 0x329214u;
    // NOP
    // 0x329218: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32921c: 0x0  nop
    ctx->pc = 0x32921cu;
    // NOP
    // 0x329220: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329224: 0x0  nop
    ctx->pc = 0x329224u;
    // NOP
    // 0x329228: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32922c: 0x0  nop
    ctx->pc = 0x32922cu;
    // NOP
    // 0x329230: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329234: 0x0  nop
    ctx->pc = 0x329234u;
    // NOP
    // 0x329238: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32923c: 0x0  nop
    ctx->pc = 0x32923cu;
    // NOP
    // 0x329240: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329244: 0x0  nop
    ctx->pc = 0x329244u;
    // NOP
    // 0x329248: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x329248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32924c: 0x0  nop
    ctx->pc = 0x32924cu;
    // NOP
    // 0x329250: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x329250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x329254: 0x0  nop
    ctx->pc = 0x329254u;
    // NOP
    // 0x329258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x329258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32925c: 0x0  nop
    ctx->pc = 0x32925cu;
    // NOP
    ctx->pc = 0x329260u;
}
