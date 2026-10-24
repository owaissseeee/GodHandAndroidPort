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

// Function: func_001E6938
// Address: 0x1e6938 - 0x1e6a48
void func_001E6938_0x1e6938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E6938_0x1e6938");
#endif

    switch (ctx->pc) {
        case 0x1e6a38u: goto label_1e6a38;
        default: break;
    }

    ctx->pc = 0x1e6938u;

    // 0x1e6938: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1e6938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1e693c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e693cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6940: 0xdc637650  ld          $v1, 0x7650($v1)
    ctx->pc = 0x1e6940u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747650u));
    // 0x1e6944: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1e6944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1e6948: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x1e6948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x1e694c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e6950: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1e6950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1e6954: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e6954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e6958: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6958u;
    {
        const bool branch_taken_0x1e6958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6958u;
        // 0x1e695c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6958) {
            ctx->pc = 0x1E6980u;
            goto label_1e6980;
        }
    }
    ctx->pc = 0x1E6960u;
    // 0x1e6960: 0x94820a80  lhu         $v0, 0xA80($a0)
    ctx->pc = 0x1e6960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2688)));
    // 0x1e6964: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e6964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e6968: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1e6968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e696c: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E696Cu;
    {
        const bool branch_taken_0x1e696c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1E6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E696Cu;
        // 0x1e6970: 0xa4820a80  sh          $v0, 0xA80($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2688), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e696c) {
            ctx->pc = 0x1E69BCu;
            goto label_1e69bc;
        }
    }
    ctx->pc = 0x1E6974u;
    // 0x1e6974: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e6974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e6978: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6978u;
    {
        const bool branch_taken_0x1e6978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6978u;
        // 0x1e697c: 0xa4820a80  sh          $v0, 0xA80($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2688), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6978) {
            ctx->pc = 0x1E69BCu;
            goto label_1e69bc;
        }
    }
    ctx->pc = 0x1E6980u;
label_1e6980:
    // 0x1e6980: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1e6980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1e6984: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x1e6984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x1e6988: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e6988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e698c: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1e698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1e6990: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e6990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e6994: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E6994u;
    {
        const bool branch_taken_0x1e6994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6994) {
            ctx->pc = 0x1E6998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6994u;
            // 0x1e6998: 0x84830a80  lh          $v1, 0xA80($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E69C0u;
            goto label_1e69c0;
        }
    }
    ctx->pc = 0x1E699Cu;
    // 0x1e699c: 0x94820a80  lhu         $v0, 0xA80($a0)
    ctx->pc = 0x1e699cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2688)));
    // 0x1e69a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e69a4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1e69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e69a8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1e69a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1e69ac: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x1e69acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e69b0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E69B0u;
    {
        const bool branch_taken_0x1e69b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69B0u;
        // 0x1e69b4: 0xa4820a80  sh          $v0, 0xA80($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2688), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69b0) {
            ctx->pc = 0x1E69BCu;
            goto label_1e69bc;
        }
    }
    ctx->pc = 0x1E69B8u;
    // 0x1e69b8: 0xa4800a80  sh          $zero, 0xA80($a0)
    ctx->pc = 0x1e69b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2688), (uint16_t)GPR_U32(ctx, 0));
label_1e69bc:
    // 0x1e69bc: 0x84830a80  lh          $v1, 0xA80($a0)
    ctx->pc = 0x1e69bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2688)));
label_1e69c0:
    // 0x1e69c0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1e69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1e69c4: 0x2447bac0  addiu       $a3, $v0, -0x4540
    ctx->pc = 0x1e69c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949568));
    // 0x1e69c8: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1e69c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e69cc: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1e69ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e69d0: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1e69d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e69d4: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1e69d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e69d8: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1e69d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e69dc: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1e69dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e69e0: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1e69e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e69e4: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1e69e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e69e8: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1e69e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e69ec: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1e69ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e69f0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1e69f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e69f4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1e69f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e69f8: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1e69f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e69fc: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1e69fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e6a00: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1e6a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e6a04: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1e6a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e6a08: 0x3c0a0043  lui         $t2, 0x43
    ctx->pc = 0x1e6a08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)67 << 16));
    // 0x1e6a0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6a10: 0x254abae0  addiu       $t2, $t2, -0x4520
    ctx->pc = 0x1e6a10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949600));
    // 0x1e6a14: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1e6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1e6a18: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e6a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e6a1c: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x1e6a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6a20: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1e6a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e6a24: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1e6a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e6a28: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1e6a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e6a2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a30: 0xc0b8358  jal         func_2E0D60
    ctx->pc = 0x1E6A30u;
    SET_GPR_U32(ctx, 31, 0x1E6A38u);
    ctx->pc = 0x1E6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A30u;
    // 0x1e6a34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D60u, 0x1E6A30u, 0x1E6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A38u;
label_1e6a38:
    // 0x1e6a38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A3Cu;
        // 0x1e6a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6A44u;
    // 0x1e6a44: 0x0  nop
    ctx->pc = 0x1e6a44u;
    // NOP
    ctx->pc = 0x1e6a48u;
}
