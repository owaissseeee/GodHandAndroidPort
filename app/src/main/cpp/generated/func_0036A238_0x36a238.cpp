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

// Function: func_0036A238
// Address: 0x36a238 - 0x36a300
void func_0036A238_0x36a238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A238_0x36a238");
#endif

    switch (ctx->pc) {
        case 0x36a264u: goto label_36a264;
        default: break;
    }

    ctx->pc = 0x36a238u;

    // 0x36a238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36a238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36a23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36a244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36a248: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36a248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a24c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36a24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36a250: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36a250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a254: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36a258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36a25c: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x36A25Cu;
    SET_GPR_U32(ctx, 31, 0x36A264u);
    ctx->pc = 0x36A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A25Cu;
    // 0x36a260: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x36A25Cu, 0x36A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A264u;
label_36a264:
    // 0x36a264: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36a264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36a268: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x36a268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x36a26c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36a26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a270: 0x34a5020f  ori         $a1, $a1, 0x20F
    ctx->pc = 0x36a270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
    // 0x36a274: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A274u;
    {
        const bool branch_taken_0x36a274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A274u;
        // 0x36a278: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a274) {
            ctx->pc = 0x36A298u;
            goto label_36a298;
        }
    }
    ctx->pc = 0x36A27Cu;
    // 0x36a27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a284: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36a284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36a288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36a28c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a290: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36A290u;
    ctx->pc = 0x36A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A290u;
    // 0x36a294: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36A290u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36A298u;
label_36a298:
    // 0x36a298: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x36a298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x36a29c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x36a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x36a2a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36a2a4: 0x8e0302bc  lw          $v1, 0x2BC($s0)
    ctx->pc = 0x36a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x36a2a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x36a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x36a2ac: 0x8e0402a8  lw          $a0, 0x2A8($s0)
    ctx->pc = 0x36a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x36a2b0: 0x54860003  bnel        $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A2B0u;
    {
        const bool branch_taken_0x36a2b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x36a2b0) {
            ctx->pc = 0x36A2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A2B0u;
            // 0x36a2b4: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A2C0u;
            goto label_36a2c0;
        }
    }
    ctx->pc = 0x36A2B8u;
    // 0x36a2b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36A2B8u;
    {
        const bool branch_taken_0x36a2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A2B8u;
        // 0x36a2bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a2b8) {
            ctx->pc = 0x36A2D8u;
            goto label_36a2d8;
        }
    }
    ctx->pc = 0x36A2C0u;
label_36a2c0:
    // 0x36a2c0: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x36a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x36a2c4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36A2C4u;
    {
        const bool branch_taken_0x36a2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a2c4) {
            ctx->pc = 0x36A2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A2C4u;
            // 0x36a2c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A2CCu;
            goto label_36a2cc;
        }
    }
    ctx->pc = 0x36A2CCu;
label_36a2cc:
    // 0x36a2cc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x36a2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x36a2d0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x36a2d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x36a2d4: 0x1012  mflo        $v0
    ctx->pc = 0x36a2d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_36a2d8:
    // 0x36a2d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x36a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x36a2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a2e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a2e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36a2e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a2ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36a2ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36a2f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x36A2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A2F4u;
        // 0x36a2f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A2FCu;
    // 0x36a2fc: 0x0  nop
    ctx->pc = 0x36a2fcu;
    // NOP
    ctx->pc = 0x36a300u;
}
