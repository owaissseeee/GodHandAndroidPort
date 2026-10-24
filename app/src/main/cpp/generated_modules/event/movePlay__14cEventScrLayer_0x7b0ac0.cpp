#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlay__14cEventScrLayer
// Address: 0x7b0ac0 - 0x7b0b70
void movePlay__14cEventScrLayer_0x7b0ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__14cEventScrLayer_0x7b0ac0");
#endif

    switch (ctx->pc) {
        case 0x7b0adcu: goto label_7b0adc;
        case 0x7b0b0cu: goto label_7b0b0c;
        case 0x7b0b1cu: goto label_7b0b1c;
        default: break;
    }

    ctx->pc = 0x7b0ac0u;

    // 0x7b0ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7b0ac4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7b0ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b0ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7b0ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7b0acc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7b0accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7b0ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0ad4: 0xc1ece2e  jal         func_7B38B8
    ctx->pc = 0x7B0AD4u;
    SET_GPR_U32(ctx, 31, 0x7B0ADCu);
    ctx->pc = 0x7B0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0AD4u;
    // 0x7b0ad8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B38B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B38B8u, 0x7B0AD4u, 0x7B0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0ADCu;
label_7b0adc:
    // 0x7b0adc: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x7b0adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x7b0ae0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x7b0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x7b0ae4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x7b0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x7b0ae8: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x7b0ae8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x7b0aec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7b0aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7b0af0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7b0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b0af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b0af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0af8: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x7b0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x7b0afc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x7b0afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x7b0b00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7b0b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7b0b04: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x7B0B04u;
    SET_GPR_U32(ctx, 31, 0x7B0B0Cu);
    ctx->pc = 0x7B0B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0B04u;
    // 0x7b0b08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x7B0B04u, 0x7B0B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0B0Cu;
label_7b0b0c:
    // 0x7b0b0c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x7B0B0Cu;
    {
        const bool branch_taken_0x7b0b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b0b0c) {
            ctx->pc = 0x7B0B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0B0Cu;
            // 0x7b0b10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0B60u;
            goto label_7b0b60;
        }
    }
    ctx->pc = 0x7B0B14u;
    // 0x7b0b14: 0xc0b6d46  jal         func_2DB518
    ctx->pc = 0x7B0B14u;
    SET_GPR_U32(ctx, 31, 0x7B0B1Cu);
    ctx->pc = 0x7B0B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0B14u;
    // 0x7b0b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB518u, 0x7B0B14u, 0x7B0B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0B1Cu;
label_7b0b1c:
    // 0x7b0b1c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x7b0b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x7b0b20: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x7b0b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x7b0b24: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x7b0b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7b0b28: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x7b0b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x7b0b2c: 0x6a040017  ldl         $a0, 0x17($s0)
    ctx->pc = 0x7b0b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x7b0b30: 0x6e040010  ldr         $a0, 0x10($s0)
    ctx->pc = 0x7b0b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x7b0b34: 0x6a05001f  ldl         $a1, 0x1F($s0)
    ctx->pc = 0x7b0b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x7b0b38: 0x6e050018  ldr         $a1, 0x18($s0)
    ctx->pc = 0x7b0b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x7b0b3c: 0xb222001f  sdl         $v0, 0x1F($s1)
    ctx->pc = 0x7b0b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0b40: 0xb6220018  sdr         $v0, 0x18($s1)
    ctx->pc = 0x7b0b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0b44: 0xb2230027  sdl         $v1, 0x27($s1)
    ctx->pc = 0x7b0b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0b48: 0xb6230020  sdr         $v1, 0x20($s1)
    ctx->pc = 0x7b0b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0b4c: 0xb224002f  sdl         $a0, 0x2F($s1)
    ctx->pc = 0x7b0b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0b50: 0xb6240028  sdr         $a0, 0x28($s1)
    ctx->pc = 0x7b0b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0b54: 0xb2250037  sdl         $a1, 0x37($s1)
    ctx->pc = 0x7b0b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0b58: 0xb6250030  sdr         $a1, 0x30($s1)
    ctx->pc = 0x7b0b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0b5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7b0b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7b0b60:
    // 0x7b0b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7b0b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b0b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0b68: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0B68u;
        // 0x7b0b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0B70u;
}
} // namespace gh_event
