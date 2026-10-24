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

// Function: cOmBase_callPhaseRoutine
// Address: 0x1a7940 - 0x1a7a08
void cOmBase_callPhaseRoutine_0x1a7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_callPhaseRoutine_0x1a7940");
#endif

    switch (ctx->pc) {
        case 0x1a7940u: goto label_1a7940;
        case 0x1a7944u: goto label_1a7944;
        case 0x1a7948u: goto label_1a7948;
        case 0x1a794cu: goto label_1a794c;
        case 0x1a7950u: goto label_1a7950;
        case 0x1a7954u: goto label_1a7954;
        case 0x1a7958u: goto label_1a7958;
        case 0x1a795cu: goto label_1a795c;
        case 0x1a7960u: goto label_1a7960;
        case 0x1a7964u: goto label_1a7964;
        case 0x1a7968u: goto label_1a7968;
        case 0x1a796cu: goto label_1a796c;
        case 0x1a7970u: goto label_1a7970;
        case 0x1a7974u: goto label_1a7974;
        case 0x1a7978u: goto label_1a7978;
        case 0x1a797cu: goto label_1a797c;
        case 0x1a7980u: goto label_1a7980;
        case 0x1a7984u: goto label_1a7984;
        case 0x1a7988u: goto label_1a7988;
        case 0x1a798cu: goto label_1a798c;
        case 0x1a7990u: goto label_1a7990;
        case 0x1a7994u: goto label_1a7994;
        case 0x1a7998u: goto label_1a7998;
        case 0x1a799cu: goto label_1a799c;
        case 0x1a79a0u: goto label_1a79a0;
        case 0x1a79a4u: goto label_1a79a4;
        case 0x1a79a8u: goto label_1a79a8;
        case 0x1a79acu: goto label_1a79ac;
        case 0x1a79b0u: goto label_1a79b0;
        case 0x1a79b4u: goto label_1a79b4;
        case 0x1a79b8u: goto label_1a79b8;
        case 0x1a79bcu: goto label_1a79bc;
        case 0x1a79c0u: goto label_1a79c0;
        case 0x1a79c4u: goto label_1a79c4;
        case 0x1a79c8u: goto label_1a79c8;
        case 0x1a79ccu: goto label_1a79cc;
        case 0x1a79d0u: goto label_1a79d0;
        case 0x1a79d4u: goto label_1a79d4;
        case 0x1a79d8u: goto label_1a79d8;
        case 0x1a79dcu: goto label_1a79dc;
        case 0x1a79e0u: goto label_1a79e0;
        case 0x1a79e4u: goto label_1a79e4;
        case 0x1a79e8u: goto label_1a79e8;
        case 0x1a79ecu: goto label_1a79ec;
        case 0x1a79f0u: goto label_1a79f0;
        case 0x1a79f4u: goto label_1a79f4;
        case 0x1a79f8u: goto label_1a79f8;
        case 0x1a79fcu: goto label_1a79fc;
        case 0x1a7a00u: goto label_1a7a00;
        case 0x1a7a04u: goto label_1a7a04;
        default: break;
    }

    ctx->pc = 0x1a7940u;

label_1a7940:
    // 0x1a7940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a7944:
    // 0x1a7944: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a7944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7948:
    // 0x1a7948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a794c:
    // 0x1a794c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_1a7950:
    // 0x1a7950: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x1a7950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1a7954:
    // 0x1a7954: 0x244975a0  addiu       $t1, $v0, 0x75A0
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30112));
label_1a7958:
    // 0x1a7958: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x1a7958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a795c:
    // 0x1a795c: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x1a795cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a7960:
    // 0x1a7960: 0x6925000f  ldl         $a1, 0xF($t1)
    ctx->pc = 0x1a7960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a7964:
    // 0x1a7964: 0x6d250008  ldr         $a1, 0x8($t1)
    ctx->pc = 0x1a7964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a7968:
    // 0x1a7968: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1a7968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a796c:
    // 0x1a796c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1a796cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a7970:
    // 0x1a7970: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1a7970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a7974:
    // 0x1a7974: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1a7974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a7978:
    // 0x1a7978: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a7978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a797c:
    // 0x1a797c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1a797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1a7980:
    // 0x1a7980: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1a7980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a7984:
    // 0x1a7984: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a7984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a7988:
    // 0x1a7988: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1a7988u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1a798c:
    // 0x1a798c: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1a7990:
    if (ctx->pc == 0x1A7990u) {
        ctx->pc = 0x1A7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A798Cu;
        // 0x1a7990: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7994u;
        goto label_1a7994;
    }
    ctx->pc = 0x1A798Cu;
    {
        const bool branch_taken_0x1a798c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A798Cu;
        // 0x1a7990: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a798c) {
            ctx->pc = 0x1A79C0u;
            goto label_1a79c0;
        }
    }
    ctx->pc = 0x1A7994u;
label_1a7994:
    // 0x1a7994: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1a7994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a7998:
    // 0x1a7998: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a7998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a799c:
    // 0x1a799c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a799cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a79a0:
    // 0x1a79a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a79a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a79a4:
    // 0x1a79a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a79a8:
    // 0x1a79a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a79ac:
    // 0x1a79ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a79acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a79b0:
    // 0x1a79b0: 0xdc88fff8  ld          $t0, -0x8($a0)
    ctx->pc = 0x1a79b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1a79b4:
    // 0x1a79b4: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x1a79b4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_1a79b8:
    // 0x1a79b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a79bc:
    if (ctx->pc == 0x1A79BCu) {
        ctx->pc = 0x1A79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79B8u;
        // 0x1a79bc: 0x90c202f5  lbu         $v0, 0x2F5($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79C0u;
        goto label_1a79c0;
    }
    ctx->pc = 0x1A79B8u;
    {
        const bool branch_taken_0x1a79b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79B8u;
        // 0x1a79bc: 0x90c202f5  lbu         $v0, 0x2F5($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79b8) {
            ctx->pc = 0x1A79CCu;
            goto label_1a79cc;
        }
    }
    ctx->pc = 0x1A79C0u;
label_1a79c0:
    // 0x1a79c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a79c4:
    // 0x1a79c4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1a79c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a79c8:
    // 0x1a79c8: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x1a79c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1a79cc:
    // 0x1a79cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a79d0:
    // 0x1a79d0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1a79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1a79d4:
    // 0x1a79d4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a79d8:
    if (ctx->pc == 0x1A79D8u) {
        ctx->pc = 0x1A79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79D4u;
        // 0x1a79d8: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79DCu;
        goto label_1a79dc;
    }
    ctx->pc = 0x1A79D4u;
    {
        const bool branch_taken_0x1a79d4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79D4u;
        // 0x1a79d8: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79d4) {
            ctx->pc = 0x1A79F0u;
            goto label_1a79f0;
        }
    }
    ctx->pc = 0x1A79DCu;
label_1a79dc:
    // 0x1a79dc: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x1a79dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1a79e0:
    // 0x1a79e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a79e4:
    // 0x1a79e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a79e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a79e8:
    // 0x1a79e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a79ec:
    if (ctx->pc == 0x1A79ECu) {
        ctx->pc = 0x1A79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79E8u;
        // 0x1a79ec: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79F0u;
        goto label_1a79f0;
    }
    ctx->pc = 0x1A79E8u;
    {
        const bool branch_taken_0x1a79e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79E8u;
        // 0x1a79ec: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79e8) {
            ctx->pc = 0x1A79F4u;
            goto label_1a79f4;
        }
    }
    ctx->pc = 0x1A79F0u;
label_1a79f0:
    // 0x1a79f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a79f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a79f4:
    // 0x1a79f4: 0xe0f809  jalr        $a3
label_1a79f8:
    if (ctx->pc == 0x1A79F8u) {
        ctx->pc = 0x1A79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79F4u;
        // 0x1a79f8: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79FCu;
        goto label_1a79fc;
    }
    ctx->pc = 0x1A79F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1A79FCu);
        ctx->pc = 0x1A79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79F4u;
        // 0x1a79f8: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A79F4u, 0x1A79FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A79FCu;
label_1a79fc:
    // 0x1a79fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a79fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7a00:
    // 0x1a7a00: 0x3e00008  jr          $ra
label_1a7a04:
    if (ctx->pc == 0x1A7A04u) {
        ctx->pc = 0x1A7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A00u;
        // 0x1a7a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A08u;
        goto label_fallthrough_0x1a7a00;
    }
    ctx->pc = 0x1A7A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A00u;
        // 0x1a7a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a7a00:
    ctx->pc = 0x1A7A08u;
}
