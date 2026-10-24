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

// Function: func_0034F418
// Address: 0x34f418 - 0x34f4a8
void func_0034F418_0x34f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F418_0x34f418");
#endif

    switch (ctx->pc) {
        case 0x34f454u: goto label_34f454;
        case 0x34f46cu: goto label_34f46c;
        case 0x34f484u: goto label_34f484;
        default: break;
    }

    ctx->pc = 0x34f418u;

    // 0x34f418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34f41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34f420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34f420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34f424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34f424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f428: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34f42c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x34f42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f430: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34f434: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x34f434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34f438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34f43c: 0x26301f74  addiu       $s0, $s1, 0x1F74
    ctx->pc = 0x34f43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8052));
    // 0x34f440: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x34f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x34f444: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F444u;
    {
        const bool branch_taken_0x34f444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x34F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F444u;
        // 0x34f448: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f444) {
            ctx->pc = 0x34F458u;
            goto label_34f458;
        }
    }
    ctx->pc = 0x34F44Cu;
    // 0x34f44c: 0xc0d32a6  jal         func_34CA98
    ctx->pc = 0x34F44Cu;
    SET_GPR_U32(ctx, 31, 0x34F454u);
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x34F44Cu, 0x34F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F454u;
label_34f454:
    // 0x34f454: 0x30520001  andi        $s2, $v0, 0x1
    ctx->pc = 0x34f454u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f458:
    // 0x34f458: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x34f458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x34f45c: 0x50b30005  beql        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F45Cu;
    {
        const bool branch_taken_0x34f45c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x34f45c) {
            ctx->pc = 0x34F460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F45Cu;
            // 0x34f460: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F474u;
            goto label_34f474;
        }
    }
    ctx->pc = 0x34F464u;
    // 0x34f464: 0xc0d32a6  jal         func_34CA98
    ctx->pc = 0x34F464u;
    SET_GPR_U32(ctx, 31, 0x34F46Cu);
    ctx->pc = 0x34F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F464u;
    // 0x34f468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x34F464u, 0x34F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F46Cu;
label_34f46c:
    // 0x34f46c: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x34f46cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x34f470: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x34f470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_34f474:
    // 0x34f474: 0x10b30005  beq         $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F474u;
    {
        const bool branch_taken_0x34f474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x34F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F474u;
        // 0x34f478: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f474) {
            ctx->pc = 0x34F48Cu;
            goto label_34f48c;
        }
    }
    ctx->pc = 0x34F47Cu;
    // 0x34f47c: 0xc0d32a6  jal         func_34CA98
    ctx->pc = 0x34F47Cu;
    SET_GPR_U32(ctx, 31, 0x34F484u);
    ctx->pc = 0x34F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F47Cu;
    // 0x34f480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x34F47Cu, 0x34F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F484u;
label_34f484:
    // 0x34f484: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x34f484u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x34f488: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x34f488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34f48c:
    // 0x34f48c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f490: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f494: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34f494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f498: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34f498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f49c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34f49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x34F4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F4A0u;
        // 0x34f4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F4A8u;
}
