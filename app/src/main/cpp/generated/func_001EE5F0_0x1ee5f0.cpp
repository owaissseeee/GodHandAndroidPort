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

// Function: func_001EE5F0
// Address: 0x1ee5f0 - 0x1ee6c8
void func_001EE5F0_0x1ee5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EE5F0_0x1ee5f0");
#endif

    switch (ctx->pc) {
        case 0x1ee648u: goto label_1ee648;
        case 0x1ee658u: goto label_1ee658;
        case 0x1ee6a4u: goto label_1ee6a4;
        default: break;
    }

    ctx->pc = 0x1ee5f0u;

    // 0x1ee5f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ee5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ee5f4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1ee5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1ee5f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ee5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1ee5fc: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1ee5fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ee600: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ee600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ee604: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ee604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee608: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1ee608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1ee60c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ee60cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee610: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ee610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1ee614: 0x30d500ff  andi        $s5, $a2, 0xFF
    ctx->pc = 0x1ee614u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ee618: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ee618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1ee61c: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x1ee61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ee620: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EE620u;
    {
        const bool branch_taken_0x1ee620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE620u;
        // 0x1ee624: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee620) {
            ctx->pc = 0x1EE6A4u;
            goto label_1ee6a4;
        }
    }
    ctx->pc = 0x1EE628u;
    // 0x1ee628: 0x2ea20005  sltiu       $v0, $s5, 0x5
    ctx->pc = 0x1ee628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ee62c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EE62Cu;
    {
        const bool branch_taken_0x1ee62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE62Cu;
        // 0x1ee630: 0x2411007c  addiu       $s1, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee62c) {
            ctx->pc = 0x1EE6A4u;
            goto label_1ee6a4;
        }
    }
    ctx->pc = 0x1EE634u;
    // 0x1ee634: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ee634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee638: 0x2518018  mult        $s0, $s2, $s1
    ctx->pc = 0x1ee638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1ee63c: 0x26040630  addiu       $a0, $s0, 0x630
    ctx->pc = 0x1ee63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x1ee640: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1EE640u;
    SET_GPR_U32(ctx, 31, 0x1EE648u);
    ctx->pc = 0x1EE644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE640u;
    // 0x1ee644: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1EE640u, 0x1EE648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE648u;
label_1ee648:
    // 0x1ee648: 0x26100b84  addiu       $s0, $s0, 0xB84
    ctx->pc = 0x1ee648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2948));
    // 0x1ee64c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ee64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee650: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1EE650u;
    SET_GPR_U32(ctx, 31, 0x1EE658u);
    ctx->pc = 0x1EE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE650u;
    // 0x1ee654: 0x2702021  addu        $a0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1EE650u, 0x1EE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE658u;
label_1ee658:
    // 0x1ee658: 0x2b18818  mult        $s1, $s5, $s1
    ctx->pc = 0x1ee658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1ee65c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1ee65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1ee660: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1ee660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1ee664: 0x2467bdc0  addiu       $a3, $v1, -0x4240
    ctx->pc = 0x1ee664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
    // 0x1ee668: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x1ee668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ee66c: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x1ee66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ee670: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1ee670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ee674: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1ee674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ee678: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x1ee678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1ee67c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ee67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ee680: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ee680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ee684: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1ee684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ee688: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1ee688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ee68c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1ee68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1ee690: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1ee694: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ee694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee698: 0x26310348  addiu       $s1, $s1, 0x348
    ctx->pc = 0x1ee698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 840));
    // 0x1ee69c: 0xc0b5996  jal         func_2D6658
    ctx->pc = 0x1EE69Cu;
    SET_GPR_U32(ctx, 31, 0x1EE6A4u);
    ctx->pc = 0x1EE6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE69Cu;
    // 0x1ee6a0: 0x2712021  addu        $a0, $s3, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6658u, 0x1EE69Cu, 0x1EE6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6A4u;
label_1ee6a4:
    // 0x1ee6a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ee6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee6a8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ee6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee6ac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1ee6acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee6b0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ee6b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee6b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ee6b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee6b8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1ee6b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee6bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6C0u;
        // 0x1ee6c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE6C8u;
}
