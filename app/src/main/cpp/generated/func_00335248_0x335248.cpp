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

// Function: func_00335248
// Address: 0x335248 - 0x3352d0
void func_00335248_0x335248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335248_0x335248");
#endif

    ctx->pc = 0x335248u;

    // 0x335248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33524c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33524cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335250: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335250u;
    {
        const bool branch_taken_0x335250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335250u;
        // 0x335254: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335250) {
            ctx->pc = 0x335270u;
            goto label_335270;
        }
    }
    ctx->pc = 0x335258u;
    // 0x335258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33525c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x335260: 0xa040a398  sb          $zero, -0x5C68($v0)
    ctx->pc = 0x335260u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3DA398u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3DA398u, _value); } while (0);
    // 0x335264: 0x3e00008  jr          $ra
    ctx->pc = 0x335264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335264u;
        // 0x335268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33526Cu;
    // 0x33526c: 0x0  nop
    ctx->pc = 0x33526cu;
    // NOP
label_335270:
    // 0x335270: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x335270u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x335274: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x335274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x335278: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x335278u;
    {
        const bool branch_taken_0x335278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335278u;
        // 0x33527c: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335278) {
            ctx->pc = 0x3352B0u;
            goto label_3352b0;
        }
    }
    ctx->pc = 0x335280u;
    // 0x335280: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x335280u;
    {
        const bool branch_taken_0x335280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x335284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335280u;
        // 0x335284: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335280) {
            ctx->pc = 0x3352B0u;
            goto label_3352b0;
        }
    }
    ctx->pc = 0x335288u;
    // 0x335288: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x335288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x33528c: 0x24484a00  addiu       $t0, $v0, 0x4A00
    ctx->pc = 0x33528cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 18944));
    // 0x335290: 0x2487a398  addiu       $a3, $a0, -0x5C68
    ctx->pc = 0x335290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943640));
    // 0x335294: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x335294u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x454A00u));
    // 0x335298: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x335298u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x454A01u));
    // 0x33529c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x33529cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3352a0: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x3352a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3352a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3352A4u;
    {
        const bool branch_taken_0x3352a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3352A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352A4u;
        // 0x3352a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3352a4) {
            ctx->pc = 0x3352BCu;
            goto label_3352bc;
        }
    }
    ctx->pc = 0x3352ACu;
    // 0x3352ac: 0x0  nop
    ctx->pc = 0x3352acu;
    // NOP
label_3352b0:
    // 0x3352b0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3352b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3352b4: 0xa080a398  sb          $zero, -0x5C68($a0)
    ctx->pc = 0x3352b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3DA398u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3DA398u, _value); } while (0);
    // 0x3352b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3352b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3352bc:
    // 0x3352bc: 0x2484a398  addiu       $a0, $a0, -0x5C68
    ctx->pc = 0x3352bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943640));
    // 0x3352c0: 0x80e95f1  j           func_3A57C4
    ctx->pc = 0x3352C0u;
    ctx->pc = 0x3352C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3352C0u;
    // 0x3352c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x3352C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3352C8u;
    // 0x3352c8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3352c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3352cc: 0x0  nop
    ctx->pc = 0x3352ccu;
    // NOP
    ctx->pc = 0x3352d0u;
}
