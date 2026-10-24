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

// Function: func_00358228
// Address: 0x358228 - 0x3582c0
void func_00358228_0x358228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358228_0x358228");
#endif

    switch (ctx->pc) {
        case 0x358254u: goto label_358254;
        case 0x358264u: goto label_358264;
        case 0x358284u: goto label_358284;
        case 0x358298u: goto label_358298;
        default: break;
    }

    ctx->pc = 0x358228u;

    // 0x358228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35822c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35822cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x358230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x358234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x358234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358238: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x358238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35823c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35823cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x358240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x358244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x358248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35824c: 0xc0d60b0  jal         func_3582C0
    ctx->pc = 0x35824Cu;
    SET_GPR_U32(ctx, 31, 0x358254u);
    ctx->pc = 0x358250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35824Cu;
    // 0x358250: 0x2453e2c4  addiu       $s3, $v0, -0x1D3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959812));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3582C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3582C0u, 0x35824Cu, 0x358254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358254u;
label_358254:
    // 0x358254: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x358254u;
    {
        const bool branch_taken_0x358254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358254u;
        // 0x358258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358254) {
            ctx->pc = 0x3582A4u;
            goto label_3582a4;
        }
    }
    ctx->pc = 0x35825Cu;
    // 0x35825c: 0xc0d60ca  jal         func_358328
    ctx->pc = 0x35825Cu;
    SET_GPR_U32(ctx, 31, 0x358264u);
    ctx->pc = 0x358328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358328u, 0x35825Cu, 0x358264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358264u;
label_358264:
    // 0x358264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358268: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x358268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35826c: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35826Cu;
    {
        const bool branch_taken_0x35826c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x358270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35826Cu;
        // 0x358270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35826c) {
            ctx->pc = 0x358290u;
            goto label_358290;
        }
    }
    ctx->pc = 0x358274u;
    // 0x358274: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x358274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x358278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35827c: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x35827Cu;
    SET_GPR_U32(ctx, 31, 0x358284u);
    ctx->pc = 0x358280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35827Cu;
    // 0x358280: 0x34a50206  ori         $a1, $a1, 0x206 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)518);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35827Cu, 0x358284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358284u;
label_358284:
    // 0x358284: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x358284u;
    {
        const bool branch_taken_0x358284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358284u;
        // 0x358288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358284) {
            ctx->pc = 0x3582A4u;
            goto label_3582a4;
        }
    }
    ctx->pc = 0x35828Cu;
    // 0x35828c: 0x0  nop
    ctx->pc = 0x35828cu;
    // NOP
label_358290:
    // 0x358290: 0xc0d60da  jal         func_358368
    ctx->pc = 0x358290u;
    SET_GPR_U32(ctx, 31, 0x358298u);
    ctx->pc = 0x358294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358290u;
    // 0x358294: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358368u, 0x358290u, 0x358298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358298u;
label_358298:
    // 0x358298: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x358298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35829c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x35829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3582a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3582a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3582a4:
    // 0x3582a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3582a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3582a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3582a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3582ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3582acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3582b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3582b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3582b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3582b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3582b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3582B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3582BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582B8u;
        // 0x3582bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3582B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3582C0u;
}
