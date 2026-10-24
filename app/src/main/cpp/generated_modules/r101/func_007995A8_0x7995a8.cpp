#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_007995A8
// Address: 0x7995a8 - 0x799688
void func_007995A8_0x7995a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007995A8_0x7995a8");
#endif

    switch (ctx->pc) {
        case 0x7995ecu: goto label_7995ec;
        case 0x799628u: goto label_799628;
        case 0x799640u: goto label_799640;
        case 0x799654u: goto label_799654;
        case 0x79965cu: goto label_79965c;
        case 0x79966cu: goto label_79966c;
        default: break;
    }

    ctx->pc = 0x7995a8u;

    // 0x7995a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7995ac: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7995b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7995b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7995b4: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x7995b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7995b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7995bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7995c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7995c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7995c4: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x7995c8: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7995cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7995d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7995d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995d8: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x7995dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7995e0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7995e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7995e4: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x7995E4u;
    SET_GPR_U32(ctx, 31, 0x7995ECu);
    ctx->pc = 0x7995E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E4u;
    // 0x7995e8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x7995E4u, 0x7995ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ECu;
label_7995ec:
    // 0x7995ec: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7995f0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f4: 0x2446acd0  addiu       $a2, $v0, -0x5330
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946000));
    // 0x7995f8: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x7995f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7995fc: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x7995fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x799600: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x799600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x799604: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x799604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x799608: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x79ACE0u));
    // 0x79960c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x79960cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799610: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x799610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799614: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x799614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799618: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x799618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79961c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x79961cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x799620: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799624: 0x0  nop
    ctx->pc = 0x799624u;
    // NOP
label_799628:
    // 0x799628: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x79962c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799630: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x799634: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x799634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x799638: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799638u;
    SET_GPR_U32(ctx, 31, 0x799640u);
    ctx->pc = 0x79963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799638u;
    // 0x79963c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799638u, 0x799640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799640u;
label_799640:
    // 0x799640: 0x2e230005  sltiu       $v1, $s1, 0x5
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799644: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799644u;
    {
        const bool branch_taken_0x799644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799644) {
            ctx->pc = 0x799648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799644u;
            // 0x799648: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799628;
        }
    }
    ctx->pc = 0x79964Cu;
    // 0x79964c: 0xc1e65a2  jal         func_799688
    ctx->pc = 0x79964Cu;
    SET_GPR_U32(ctx, 31, 0x799654u);
    ctx->pc = 0x799688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799688u, 0x79964Cu, 0x799654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0xc1e65ca  jal         func_799728
    ctx->pc = 0x799654u;
    SET_GPR_U32(ctx, 31, 0x79965Cu);
    ctx->pc = 0x799728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799728u, 0x799654u, 0x79965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79965Cu;
label_79965c:
    // 0x79965c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799660: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799660u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799664: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799664u;
    SET_GPR_U32(ctx, 31, 0x79966Cu);
    ctx->pc = 0x799668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799664u;
    // 0x799668: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799664u, 0x79966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79966Cu;
label_79966c:
    // 0x79966c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79966cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799670: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799674: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799678: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79967c: 0x3e00008  jr          $ra
    ctx->pc = 0x79967Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79967Cu;
        // 0x799680: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79967Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799684u;
    // 0x799684: 0x0  nop
    ctx->pc = 0x799684u;
    // NOP
    ctx->pc = 0x799688u;
}
} // namespace gh_r101
