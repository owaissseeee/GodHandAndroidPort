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

// Function: func_00345250
// Address: 0x345250 - 0x3452b0
void func_00345250_0x345250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345250_0x345250");
#endif

    ctx->pc = 0x345250u;

    // 0x345250: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x345250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x345254: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x345254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34525c: 0x28c50000  slti        $a1, $a2, 0x0
    ctx->pc = 0x34525cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x345260: 0x24c70007  addiu       $a3, $a2, 0x7
    ctx->pc = 0x345260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x345264: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x345264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345268: 0xe5180b  movn        $v1, $a3, $a1
    ctx->pc = 0x345268u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x34526c: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x34526cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x345270: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x345270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x345274: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x345274u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x345278: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x345278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34527c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x345280: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x345280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x345284: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x345284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x345288: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x345288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34528c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x34528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x345290: 0x14880002  bne         $a0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x345290u;
    {
        const bool branch_taken_0x345290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x345294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345290u;
        // 0x345294: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345290) {
            ctx->pc = 0x34529Cu;
            goto label_34529c;
        }
    }
    ctx->pc = 0x345298u;
    // 0x345298: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x345298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_34529c:
    // 0x34529c: 0x3e00008  jr          $ra
    ctx->pc = 0x34529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34529Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3452A4u;
    // 0x3452a4: 0x0  nop
    ctx->pc = 0x3452a4u;
    // NOP
    // 0x3452a8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3452a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3452ac: 0x0  nop
    ctx->pc = 0x3452acu;
    // NOP
    ctx->pc = 0x3452b0u;
}
