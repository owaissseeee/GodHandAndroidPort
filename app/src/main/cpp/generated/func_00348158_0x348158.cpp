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

// Function: func_00348158
// Address: 0x348158 - 0x3481d8
void func_00348158_0x348158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348158_0x348158");
#endif

    switch (ctx->pc) {
        case 0x348174u: goto label_348174;
        case 0x3481c0u: goto label_3481c0;
        default: break;
    }

    ctx->pc = 0x348158u;

    // 0x348158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34815c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34815cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348160: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x348160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x348164: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x348164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x348168: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x348168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34816c: 0xc0d1a5a  jal         func_346968
    ctx->pc = 0x34816Cu;
    SET_GPR_U32(ctx, 31, 0x348174u);
    ctx->pc = 0x348170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34816Cu;
    // 0x348170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346968u, 0x34816Cu, 0x348174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348174u;
label_348174:
    // 0x348174: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x348174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x348178: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x348178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x34817c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348180: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x348180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348184: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x348184u;
    {
        const bool branch_taken_0x348184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348184) {
            ctx->pc = 0x348188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348184u;
            // 0x348188: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34818Cu;
            goto label_34818c;
        }
    }
    ctx->pc = 0x34818Cu;
label_34818c:
    // 0x34818c: 0x8e0202fc  lw          $v0, 0x2FC($s0)
    ctx->pc = 0x34818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x348190: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x348190u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x348194: 0x1812  mflo        $v1
    ctx->pc = 0x348194u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x348198: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x348198u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34819c: 0x1012  mflo        $v0
    ctx->pc = 0x34819cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3481a0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3481a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3481a4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3481A4u;
    {
        const bool branch_taken_0x3481a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3481a4) {
            ctx->pc = 0x3481A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3481A4u;
            // 0x3481a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3481CCu;
            goto label_3481cc;
        }
    }
    ctx->pc = 0x3481ACu;
    // 0x3481ac: 0x8e0202e8  lw          $v0, 0x2E8($s0)
    ctx->pc = 0x3481acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x3481b0: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3481B0u;
    {
        const bool branch_taken_0x3481b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3481b0) {
            ctx->pc = 0x3481B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3481B0u;
            // 0x3481b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3481CCu;
            goto label_3481cc;
        }
    }
    ctx->pc = 0x3481B8u;
    // 0x3481b8: 0xc0d1e90  jal         func_347A40
    ctx->pc = 0x3481B8u;
    SET_GPR_U32(ctx, 31, 0x3481C0u);
    ctx->pc = 0x3481BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3481B8u;
    // 0x3481bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347A40u, 0x3481B8u, 0x3481C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481C0u;
label_3481c0:
    // 0x3481c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3481c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3481c4: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x3481c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
    // 0x3481c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3481c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3481cc:
    // 0x3481cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3481ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3481d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3481D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3481D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481D0u;
        // 0x3481d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3481D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3481D8u;
}
