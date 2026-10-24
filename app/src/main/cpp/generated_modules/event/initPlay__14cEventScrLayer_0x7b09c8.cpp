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
// Function: initPlay__14cEventScrLayer
// Address: 0x7b09c8 - 0x7b0ac0
void initPlay__14cEventScrLayer_0x7b09c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__14cEventScrLayer_0x7b09c8");
#endif

    switch (ctx->pc) {
        case 0x7b09f0u: goto label_7b09f0;
        case 0x7b0a04u: goto label_7b0a04;
        case 0x7b0a14u: goto label_7b0a14;
        case 0x7b0a24u: goto label_7b0a24;
        case 0x7b0a2cu: goto label_7b0a2c;
        case 0x7b0a34u: goto label_7b0a34;
        case 0x7b0a40u: goto label_7b0a40;
        case 0x7b0a64u: goto label_7b0a64;
        default: break;
    }

    ctx->pc = 0x7b09c8u;

    // 0x7b09c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7b09c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7b09cc: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7b09ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7b09d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7b09d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7b09d4: 0x24a54eb0  addiu       $a1, $a1, 0x4EB0
    ctx->pc = 0x7b09d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20144));
    // 0x7b09d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b09d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b09dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7b09dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7b09e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7b09e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7b09e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b09e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b09e8: 0xc1ecebc  jal         func_7B3AF0
    ctx->pc = 0x7B09E8u;
    SET_GPR_U32(ctx, 31, 0x7B09F0u);
    ctx->pc = 0x7B09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B09E8u;
    // 0x7b09ec: 0x26320038  addiu       $s2, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3AF0u, 0x7B09E8u, 0x7B09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B09F0u;
label_7b09f0:
    // 0x7b09f0: 0x26300058  addiu       $s0, $s1, 0x58
    ctx->pc = 0x7b09f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x7b09f4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x7b09f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x7b09f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7b09f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b09fc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7B09FCu;
    SET_GPR_U32(ctx, 31, 0x7B0A04u);
    ctx->pc = 0x7B0A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B09FCu;
    // 0x7b0a00: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7B09FCu, 0x7B0A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0A04u;
label_7b0a04:
    // 0x7b0a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7b0a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7b0a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0a0c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7B0A0Cu;
    SET_GPR_U32(ctx, 31, 0x7B0A14u);
    ctx->pc = 0x7B0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0A0Cu;
    // 0x7b0a10: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7B0A0Cu, 0x7B0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0A14u;
label_7b0a14:
    // 0x7b0a14: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x7b0a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x7b0a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7b0a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0a1c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7B0A1Cu;
    SET_GPR_U32(ctx, 31, 0x7B0A24u);
    ctx->pc = 0x7B0A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0A1Cu;
    // 0x7b0a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7B0A1Cu, 0x7B0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0A24u;
label_7b0a24:
    // 0x7b0a24: 0xc0b6d68  jal         func_2DB5A0
    ctx->pc = 0x7B0A24u;
    SET_GPR_U32(ctx, 31, 0x7B0A2Cu);
    ctx->pc = 0x7B0A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0A24u;
    // 0x7b0a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB5A0u, 0x7B0A24u, 0x7B0A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0A2Cu;
label_7b0a2c:
    // 0x7b0a2c: 0xc0b6d88  jal         func_2DB620
    ctx->pc = 0x7B0A2Cu;
    SET_GPR_U32(ctx, 31, 0x7B0A34u);
    ctx->pc = 0x7B0A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0A2Cu;
    // 0x7b0a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB620u, 0x7B0A2Cu, 0x7B0A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0A34u;
label_7b0a34:
    // 0x7b0a34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7b0a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b0a38: 0xc1ece92  jal         func_7B3A48
    ctx->pc = 0x7B0A38u;
    SET_GPR_U32(ctx, 31, 0x7B0A40u);
    ctx->pc = 0x7B0A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0A38u;
    // 0x7b0a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3A48u, 0x7B0A38u, 0x7B0A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0A40u;
label_7b0a40:
    // 0x7b0a40: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x7b0a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x7b0a44: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x7b0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x7b0a48: 0x242800a  movz        $s0, $s2, $v0
    ctx->pc = 0x7b0a48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x7b0a4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7b0a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7b0a50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7b0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b0a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b0a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0a58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7b0a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7b0a5c: 0xc0b6d46  jal         func_2DB518
    ctx->pc = 0x7B0A5Cu;
    SET_GPR_U32(ctx, 31, 0x7B0A64u);
    ctx->pc = 0x7B0A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0A5Cu;
    // 0x7b0a60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB518u, 0x7B0A5Cu, 0x7B0A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0A64u;
label_7b0a64:
    // 0x7b0a64: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x7b0a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x7b0a68: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x7b0a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x7b0a6c: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x7b0a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7b0a70: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x7b0a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x7b0a74: 0x6a040017  ldl         $a0, 0x17($s0)
    ctx->pc = 0x7b0a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x7b0a78: 0x6e040010  ldr         $a0, 0x10($s0)
    ctx->pc = 0x7b0a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x7b0a7c: 0x6a05001f  ldl         $a1, 0x1F($s0)
    ctx->pc = 0x7b0a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x7b0a80: 0x6e050018  ldr         $a1, 0x18($s0)
    ctx->pc = 0x7b0a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x7b0a84: 0xb222001f  sdl         $v0, 0x1F($s1)
    ctx->pc = 0x7b0a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0a88: 0xb6220018  sdr         $v0, 0x18($s1)
    ctx->pc = 0x7b0a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0a8c: 0xb2230027  sdl         $v1, 0x27($s1)
    ctx->pc = 0x7b0a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0a90: 0xb6230020  sdr         $v1, 0x20($s1)
    ctx->pc = 0x7b0a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0a94: 0xb224002f  sdl         $a0, 0x2F($s1)
    ctx->pc = 0x7b0a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0a98: 0xb6240028  sdr         $a0, 0x28($s1)
    ctx->pc = 0x7b0a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0a9c: 0xb2250037  sdl         $a1, 0x37($s1)
    ctx->pc = 0x7b0a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0aa0: 0xb6250030  sdr         $a1, 0x30($s1)
    ctx->pc = 0x7b0aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7b0aa4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7b0aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b0aa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7b0aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b0aac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7b0aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b0ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0AB4u;
        // 0x7b0ab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0ABCu;
    // 0x7b0abc: 0x0  nop
    ctx->pc = 0x7b0abcu;
    // NOP
    ctx->pc = 0x7b0ac0u;
}
} // namespace gh_event
