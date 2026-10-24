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

// Function: cOmbb_initCountdown
// Address: 0x1b8670 - 0x1b8718
void cOmbb_initCountdown_0x1b8670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmbb_initCountdown_0x1b8670");
#endif

    switch (ctx->pc) {
        case 0x1b868cu: goto label_1b868c;
        default: break;
    }

    ctx->pc = 0x1b8670u;

    // 0x1b8670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8674: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b8674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b867c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8680: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b8680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b8684: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1B8684u;
    SET_GPR_U32(ctx, 31, 0x1B868Cu);
    ctx->pc = 0x1B8688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8684u;
    // 0x1b8688: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1B8684u, 0x1B868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B868Cu;
label_1b868c:
    // 0x1b868c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1b868cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b8690: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1b8690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b8694: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8694u;
    {
        const bool branch_taken_0x1b8694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8694u;
        // 0x1b8698: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8694) {
            ctx->pc = 0x1B86B4u;
            goto label_1b86b4;
        }
    }
    ctx->pc = 0x1B869Cu;
    // 0x1b869c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b869cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b86a0: 0x24428b40  addiu       $v0, $v0, -0x74C0
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937408));
    // 0x1b86a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b86a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b86ac: 0x800008  jr          $a0
    ctx->pc = 0x1B86ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B86B4u: goto label_1b86b4;
            case 0x1B86C4u: goto label_1b86c4;
            case 0x1B86D4u: goto label_1b86d4;
            case 0x1B86E4u: goto label_1b86e4;
            case 0x1B86F4u: goto label_1b86f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B86ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B86B4u;
label_1b86b4:
    // 0x1b86b4: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x1b86b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x1b86b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b86b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b86bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B86BCu;
    {
        const bool branch_taken_0x1b86bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86BCu;
        // 0x1b86c0: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86bc) {
            ctx->pc = 0x1B8704u;
            goto label_1b8704;
        }
    }
    ctx->pc = 0x1B86C4u;
label_1b86c4:
    // 0x1b86c4: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1b86c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1b86c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b86c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b86cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B86CCu;
    {
        const bool branch_taken_0x1b86cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86CCu;
        // 0x1b86d0: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86cc) {
            ctx->pc = 0x1B8704u;
            goto label_1b8704;
        }
    }
    ctx->pc = 0x1B86D4u;
label_1b86d4:
    // 0x1b86d4: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x1b86d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x1b86d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b86d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b86dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B86DCu;
    {
        const bool branch_taken_0x1b86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86DCu;
        // 0x1b86e0: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86dc) {
            ctx->pc = 0x1B8704u;
            goto label_1b8704;
        }
    }
    ctx->pc = 0x1B86E4u;
label_1b86e4:
    // 0x1b86e4: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x1b86e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x1b86e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b86e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b86ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B86ECu;
    {
        const bool branch_taken_0x1b86ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86ECu;
        // 0x1b86f0: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86ec) {
            ctx->pc = 0x1B8704u;
            goto label_1b8704;
        }
    }
    ctx->pc = 0x1B86F4u;
label_1b86f4:
    // 0x1b86f4: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1b86f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1b86f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b86f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b86fc: 0x0  nop
    ctx->pc = 0x1b86fcu;
    // NOP
    // 0x1b8700: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x1b8700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_1b8704:
    // 0x1b8704: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b8704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b870c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B870Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B870Cu;
        // 0x1b8710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B870Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8714u;
    // 0x1b8714: 0x0  nop
    ctx->pc = 0x1b8714u;
    // NOP
    ctx->pc = 0x1b8718u;
}
