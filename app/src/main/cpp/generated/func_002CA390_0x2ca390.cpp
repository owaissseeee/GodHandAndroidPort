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

// Function: func_002CA390
// Address: 0x2ca390 - 0x2ca470
void func_002CA390_0x2ca390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CA390_0x2ca390");
#endif

    switch (ctx->pc) {
        case 0x2ca3e8u: goto label_2ca3e8;
        case 0x2ca430u: goto label_2ca430;
        default: break;
    }

    ctx->pc = 0x2ca390u;

    // 0x2ca390: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ca390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ca394: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ca394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ca398: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ca398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ca39c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ca39cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3a0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2ca3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2ca3a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ca3a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3a8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2ca3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2ca3ac: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2ca3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2ca3b0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2ca3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2ca3b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ca3b8: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x2ca3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x2ca3bc: 0x10530023  beq         $v0, $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CA3BCu;
    {
        const bool branch_taken_0x2ca3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2CA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3BCu;
        // 0x2ca3c0: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3bc) {
            ctx->pc = 0x2CA44Cu;
            goto label_2ca44c;
        }
    }
    ctx->pc = 0x2CA3C4u;
    // 0x2ca3c4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ca3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ca3c8: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2ca3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ca3cc: 0x2442ccc0  addiu       $v0, $v0, -0x3340
    ctx->pc = 0x2ca3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954176));
    // 0x2ca3d0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2ca3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2ca3d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ca3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3d8: 0x2492ce40  addiu       $s2, $a0, -0x31C0
    ctx->pc = 0x2ca3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954560));
    // 0x2ca3dc: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2ca3dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca3e0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2ca3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca3e4: 0x0  nop
    ctx->pc = 0x2ca3e4u;
    // NOP
label_2ca3e8:
    // 0x2ca3e8: 0x960a0000  lhu         $t2, 0x0($s0)
    ctx->pc = 0x2ca3e8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca3ec: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x2ca3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2ca3f0: 0x96090002  lhu         $t1, 0x2($s0)
    ctx->pc = 0x2ca3f0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ca3f4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2ca3f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2ca3f8: 0x96080004  lhu         $t0, 0x4($s0)
    ctx->pc = 0x2ca3f8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ca3fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ca3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca400: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x2ca400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2ca404: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x2ca404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ca408: 0x9606000a  lhu         $a2, 0xA($s0)
    ctx->pc = 0x2ca408u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2ca40c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2ca40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ca410: 0xa7aa0000  sh          $t2, 0x0($sp)
    ctx->pc = 0x2ca410u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2ca414: 0xa7a90002  sh          $t1, 0x2($sp)
    ctx->pc = 0x2ca414u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x2ca418: 0xa7a80004  sh          $t0, 0x4($sp)
    ctx->pc = 0x2ca418u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2ca41c: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x2ca41cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca420: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x2ca420u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca424: 0xa7a6000a  sh          $a2, 0xA($sp)
    ctx->pc = 0x2ca424u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ca428: 0xc0dd276  jal         func_3749D8
    ctx->pc = 0x2CA428u;
    SET_GPR_U32(ctx, 31, 0x2CA430u);
    ctx->pc = 0x2CA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA428u;
    // 0x2ca42c: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3749D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3749D8u, 0x2CA428u, 0x2CA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA430u;
label_2ca430:
    // 0x2ca430: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA430u;
    {
        const bool branch_taken_0x2ca430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2CA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA430u;
        // 0x2ca434: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca430) {
            ctx->pc = 0x2CA44Cu;
            goto label_2ca44c;
        }
    }
    ctx->pc = 0x2CA438u;
    // 0x2ca438: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2ca438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2ca43c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2ca43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ca440: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2CA440u;
    {
        const bool branch_taken_0x2ca440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA440u;
        // 0x2ca444: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca440) {
            ctx->pc = 0x2CA3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca3e8;
        }
    }
    ctx->pc = 0x2CA448u;
    // 0x2ca448: 0xae930130  sw          $s3, 0x130($s4)
    ctx->pc = 0x2ca448u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 19));
label_2ca44c:
    // 0x2ca44c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2ca44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ca450: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2ca450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca454: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2ca454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca458: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ca458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca45c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ca45cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca460: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2ca460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca468: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA468u;
        // 0x2ca46c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA470u;
}
