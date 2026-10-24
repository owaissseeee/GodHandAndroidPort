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

// Function: func_0036E208
// Address: 0x36e208 - 0x36e2b8
void func_0036E208_0x36e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036E208_0x36e208");
#endif

    ctx->pc = 0x36e208u;

    // 0x36e208: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x36e208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e20c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x36e20cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e210: 0x8d240050  lw          $a0, 0x50($t1)
    ctx->pc = 0x36e210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x36e214: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x36e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x36e218: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x36e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x36e21c: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x36e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x36e220: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x36e220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x36e224: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x36e224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x36e228: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x36e228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x36e22c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x36e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x36e230: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x36e230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x36e234: 0x8d270048  lw          $a3, 0x48($t1)
    ctx->pc = 0x36e234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x36e238: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x36e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x36e23c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x36e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x36e240: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x36e240u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x36e244: 0xad2302cc  sw          $v1, 0x2CC($t1)
    ctx->pc = 0x36e244u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 716), GPR_U32(ctx, 3));
    // 0x36e248: 0xad2402c4  sw          $a0, 0x2C4($t1)
    ctx->pc = 0x36e248u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 708), GPR_U32(ctx, 4));
    // 0x36e24c: 0x14e80004  bne         $a3, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E24Cu;
    {
        const bool branch_taken_0x36e24c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x36E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E24Cu;
        // 0x36e250: 0xad2602c8  sw          $a2, 0x2C8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 712), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e24c) {
            ctx->pc = 0x36E260u;
            goto label_36e260;
        }
    }
    ctx->pc = 0x36E254u;
    // 0x36e254: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36E254u;
    {
        const bool branch_taken_0x36e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E254u;
        // 0x36e258: 0xad2502d0  sw          $a1, 0x2D0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e254) {
            ctx->pc = 0x36E288u;
            goto label_36e288;
        }
    }
    ctx->pc = 0x36E25Cu;
    // 0x36e25c: 0x0  nop
    ctx->pc = 0x36e25cu;
    // NOP
label_36e260:
    // 0x36e260: 0x8d230118  lw          $v1, 0x118($t1)
    ctx->pc = 0x36e260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 280)));
    // 0x36e264: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e268: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E268u;
    {
        const bool branch_taken_0x36e268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x36E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E268u;
        // 0x36e26c: 0x24c2001f  addiu       $v0, $a2, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e268) {
            ctx->pc = 0x36E280u;
            goto label_36e280;
        }
    }
    ctx->pc = 0x36E270u;
    // 0x36e270: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x36e270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x36e274: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36E274u;
    {
        const bool branch_taken_0x36e274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E274u;
        // 0x36e278: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e274) {
            ctx->pc = 0x36E284u;
            goto label_36e284;
        }
    }
    ctx->pc = 0x36E27Cu;
    // 0x36e27c: 0x0  nop
    ctx->pc = 0x36e27cu;
    // NOP
label_36e280:
    // 0x36e280: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x36e280u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_36e284:
    // 0x36e284: 0xad2202d0  sw          $v0, 0x2D0($t1)
    ctx->pc = 0x36e284u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 2));
label_36e288:
    // 0x36e288: 0x8d2302cc  lw          $v1, 0x2CC($t1)
    ctx->pc = 0x36e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 716)));
    // 0x36e28c: 0x8d2402d0  lw          $a0, 0x2D0($t1)
    ctx->pc = 0x36e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 720)));
    // 0x36e290: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x36e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x36e294: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x36e294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x36e298: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x36e298u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x36e29c: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x36e29cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x36e2a0: 0xad2503bc  sw          $a1, 0x3BC($t1)
    ctx->pc = 0x36e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 956), GPR_U32(ctx, 5));
    // 0x36e2a4: 0xad2203c0  sw          $v0, 0x3C0($t1)
    ctx->pc = 0x36e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 960), GPR_U32(ctx, 2));
    // 0x36e2a8: 0xad2303b4  sw          $v1, 0x3B4($t1)
    ctx->pc = 0x36e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 948), GPR_U32(ctx, 3));
    // 0x36e2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x36E2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E2ACu;
        // 0x36e2b0: 0xad2403b8  sw          $a0, 0x3B8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 952), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E2B4u;
    // 0x36e2b4: 0x0  nop
    ctx->pc = 0x36e2b4u;
    // NOP
    ctx->pc = 0x36e2b8u;
}
