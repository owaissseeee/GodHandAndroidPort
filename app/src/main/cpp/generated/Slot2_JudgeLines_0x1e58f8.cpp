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

// Function: Slot2_JudgeLines
// Address: 0x1e58f8 - 0x1e5d08
void Slot2_JudgeLines_0x1e58f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_JudgeLines_0x1e58f8");
#endif

    switch (ctx->pc) {
        case 0x1e5914u: goto label_1e5914;
        case 0x1e596cu: goto label_1e596c;
        case 0x1e5a00u: goto label_1e5a00;
        case 0x1e5a98u: goto label_1e5a98;
        case 0x1e5b30u: goto label_1e5b30;
        case 0x1e5bc8u: goto label_1e5bc8;
        case 0x1e5c60u: goto label_1e5c60;
        default: break;
    }

    ctx->pc = 0x1e58f8u;

    // 0x1e58f8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1e58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1e58fc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e58fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e5900: 0x2445b9d8  addiu       $a1, $v0, -0x4628
    ctx->pc = 0x1e5900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949336));
    // 0x1e5904: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1e5904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1e5908: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5908u;
    {
        const bool branch_taken_0x1e5908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5908u;
        // 0x1e590c: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5908) {
            ctx->pc = 0x1E5968u;
            goto label_1e5968;
        }
    }
    ctx->pc = 0x1E5910u;
    // 0x1e5910: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x1e5910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_1e5914:
    // 0x1e5914: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x1e5914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e5918: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x1e5918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e591c: 0x68a7000f  ldl         $a3, 0xF($a1)
    ctx->pc = 0x1e591cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1e5920: 0x6ca70008  ldr         $a3, 0x8($a1)
    ctx->pc = 0x1e5920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1e5924: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x1e5924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1e5928: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x1e5928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1e592c: 0x68a9001f  ldl         $t1, 0x1F($a1)
    ctx->pc = 0x1e592cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1e5930: 0x6ca90018  ldr         $t1, 0x18($a1)
    ctx->pc = 0x1e5930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1e5934: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x1e5934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5938: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x1e5938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e593c: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x1e593cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5940: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x1e5940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5944: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x1e5944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5948: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x1e5948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e594c: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x1e594cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5950: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x1e5950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5954: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1e5954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1e5958: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1E5958u;
    {
        const bool branch_taken_0x1e5958 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5958u;
        // 0x1e595c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5958) {
            ctx->pc = 0x1E5914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5914;
        }
    }
    ctx->pc = 0x1E5960u;
    // 0x1e5960: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E5960u;
    {
        const bool branch_taken_0x1e5960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5960u;
        // 0x1e5964: 0x948603d2  lhu         $a2, 0x3D2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 978)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5960) {
            ctx->pc = 0x1E599Cu;
            goto label_1e599c;
        }
    }
    ctx->pc = 0x1E5968u;
label_1e5968:
    // 0x1e5968: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x1e5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_1e596c:
    // 0x1e596c: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x1e596cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5970: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x1e5970u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5974: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x1e5974u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e5978: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x1e5978u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e597c: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x1e597cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x1e5980: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1e5980u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1e5984: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x1e5984u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1e5988: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1e5988u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1e598c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1e598cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1e5990: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E5990u;
    {
        const bool branch_taken_0x1e5990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5990u;
        // 0x1e5994: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5990) {
            ctx->pc = 0x1E596Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e596c;
        }
    }
    ctx->pc = 0x1E5998u;
    // 0x1e5998: 0x948603d2  lhu         $a2, 0x3D2($a0)
    ctx->pc = 0x1e5998u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 978)));
label_1e599c:
    // 0x1e599c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e59a0: 0x68a90007  ldl         $t1, 0x7($a1)
    ctx->pc = 0x1e59a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1e59a4: 0x6ca90000  ldr         $t1, 0x0($a1)
    ctx->pc = 0x1e59a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1e59a8: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x1e59a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e59ac: 0xb0690007  sdl         $t1, 0x7($v1)
    ctx->pc = 0x1e59acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e59b0: 0xb4690000  sdr         $t1, 0x0($v1)
    ctx->pc = 0x1e59b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e59b4: 0x10c20058  beq         $a2, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1E59B4u;
    {
        const bool branch_taken_0x1e59b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59B4u;
        // 0x1e59b8: 0xac6a0008  sw          $t2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59b4) {
            ctx->pc = 0x1E5B18u;
            goto label_1e5b18;
        }
    }
    ctx->pc = 0x1E59BCu;
    // 0x1e59bc: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1e59bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e59c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E59C0u;
    {
        const bool branch_taken_0x1e59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59C0u;
        // 0x1e59c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59c0) {
            ctx->pc = 0x1E59D8u;
            goto label_1e59d8;
        }
    }
    ctx->pc = 0x1E59C8u;
    // 0x1e59c8: 0x10c2009f  beq         $a2, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x1E59C8u;
    {
        const bool branch_taken_0x1e59c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59C8u;
        // 0x1e59cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59c8) {
            ctx->pc = 0x1E5C48u;
            goto label_1e5c48;
        }
    }
    ctx->pc = 0x1E59D0u;
    // 0x1e59d0: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x1E59D0u;
    {
        const bool branch_taken_0x1e59d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59D0u;
        // 0x1e59d4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59d0) {
            ctx->pc = 0x1E5CF4u;
            goto label_1e5cf4;
        }
    }
    ctx->pc = 0x1E59D8u;
label_1e59d8:
    // 0x1e59d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e59dc: 0x14c200c5  bne         $a2, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1E59DCu;
    {
        const bool branch_taken_0x1e59dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59DCu;
        // 0x1e59e0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59dc) {
            ctx->pc = 0x1E5CF4u;
            goto label_1e5cf4;
        }
    }
    ctx->pc = 0x1E59E4u;
    // 0x1e59e4: 0x8c890100  lw          $t1, 0x100($a0)
    ctx->pc = 0x1e59e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1e59e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e59e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59ec: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1e59ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e59f0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1e59f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e59f4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1e59f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e59f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e59f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59fc: 0x0  nop
    ctx->pc = 0x1e59fcu;
    // NOP
label_1e5a00:
    // 0x1e5a00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5a04: 0x5522001b  bnel        $t1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E5A04u;
    {
        const bool branch_taken_0x1e5a04 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a04) {
            ctx->pc = 0x1E5A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5A04u;
            // 0x1e5a08: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5A74u;
            goto label_1e5a74;
        }
    }
    ctx->pc = 0x1E5A0Cu;
    // 0x1e5a0c: 0x8c8301ec  lw          $v1, 0x1EC($a0)
    ctx->pc = 0x1e5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x1e5a10: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e5a14: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5A14u;
    {
        const bool branch_taken_0x1e5a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a14) {
            ctx->pc = 0x1E5A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5A14u;
            // 0x1e5a18: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5A74u;
            goto label_1e5a74;
        }
    }
    ctx->pc = 0x1E5A1Cu;
    // 0x1e5a1c: 0x8c8302d8  lw          $v1, 0x2D8($a0)
    ctx->pc = 0x1e5a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x1e5a20: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5a24: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5A24u;
    {
        const bool branch_taken_0x1e5a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a24) {
            ctx->pc = 0x1E5A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5A24u;
            // 0x1e5a28: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5A74u;
            goto label_1e5a74;
        }
    }
    ctx->pc = 0x1E5A2Cu;
    // 0x1e5a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5a30: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E5A30u;
    {
        const bool branch_taken_0x1e5a30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A30u;
        // 0x1e5a34: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a30) {
            ctx->pc = 0x1E5A60u;
            goto label_1e5a60;
        }
    }
    ctx->pc = 0x1E5A38u;
    // 0x1e5a38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5A38u;
    {
        const bool branch_taken_0x1e5a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5a38) {
            ctx->pc = 0x1E5A50u;
            goto label_1e5a50;
        }
    }
    ctx->pc = 0x1E5A40u;
    // 0x1e5a40: 0x10c000ad  beqz        $a2, . + 4 + (0xAD << 2)
    ctx->pc = 0x1E5A40u;
    {
        const bool branch_taken_0x1e5a40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A40u;
        // 0x1e5a44: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a40) {
            ctx->pc = 0x1E5CF8u;
            goto label_1e5cf8;
        }
    }
    ctx->pc = 0x1E5A48u;
    // 0x1e5a48: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1E5A48u;
    {
        const bool branch_taken_0x1e5a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A48u;
        // 0x1e5a4c: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a48) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5A50u;
label_1e5a50:
    // 0x1e5a50: 0x50c8009e  beql        $a2, $t0, . + 4 + (0x9E << 2)
    ctx->pc = 0x1E5A50u;
    {
        const bool branch_taken_0x1e5a50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x1e5a50) {
            ctx->pc = 0x1E5A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5A50u;
            // 0x1e5a54: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CCCu;
            goto label_1e5ccc;
        }
    }
    ctx->pc = 0x1E5A58u;
    // 0x1e5a58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5A58u;
    {
        const bool branch_taken_0x1e5a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A58u;
        // 0x1e5a5c: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a58) {
            ctx->pc = 0x1E5A6Cu;
            goto label_1e5a6c;
        }
    }
    ctx->pc = 0x1E5A60u;
label_1e5a60:
    // 0x1e5a60: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1e5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1e5a64: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1E5A64u;
    {
        const bool branch_taken_0x1e5a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A64u;
        // 0x1e5a68: 0xac880008  sw          $t0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a64) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5A6Cu;
label_1e5a6c:
    // 0x1e5a6c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1E5A6Cu;
    {
        const bool branch_taken_0x1e5a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A6Cu;
        // 0x1e5a70: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a6c) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5A74u;
label_1e5a74:
    // 0x1e5a74: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e5a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e5a78: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E5A78u;
    {
        const bool branch_taken_0x1e5a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A78u;
        // 0x1e5a7c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a78) {
            ctx->pc = 0x1E5A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5a00;
        }
    }
    ctx->pc = 0x1E5A80u;
    // 0x1e5a80: 0x8c890108  lw          $t1, 0x108($a0)
    ctx->pc = 0x1e5a80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x1e5a84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a88: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1e5a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5a8c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1e5a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5a90: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1e5a90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e5a94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e5a98:
    // 0x1e5a98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5a9c: 0x5522001b  bnel        $t1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E5A9Cu;
    {
        const bool branch_taken_0x1e5a9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a9c) {
            ctx->pc = 0x1E5AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5A9Cu;
            // 0x1e5aa0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5B0Cu;
            goto label_1e5b0c;
        }
    }
    ctx->pc = 0x1E5AA4u;
    // 0x1e5aa4: 0x8c8301ec  lw          $v1, 0x1EC($a0)
    ctx->pc = 0x1e5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x1e5aa8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e5aac: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5AACu;
    {
        const bool branch_taken_0x1e5aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5aac) {
            ctx->pc = 0x1E5AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5AACu;
            // 0x1e5ab0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5B0Cu;
            goto label_1e5b0c;
        }
    }
    ctx->pc = 0x1E5AB4u;
    // 0x1e5ab4: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x1e5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1e5ab8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5abc: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5ABCu;
    {
        const bool branch_taken_0x1e5abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5abc) {
            ctx->pc = 0x1E5AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5ABCu;
            // 0x1e5ac0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5B0Cu;
            goto label_1e5b0c;
        }
    }
    ctx->pc = 0x1E5AC4u;
    // 0x1e5ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5ac8: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E5AC8u;
    {
        const bool branch_taken_0x1e5ac8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AC8u;
        // 0x1e5acc: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ac8) {
            ctx->pc = 0x1E5AF8u;
            goto label_1e5af8;
        }
    }
    ctx->pc = 0x1E5AD0u;
    // 0x1e5ad0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5AD0u;
    {
        const bool branch_taken_0x1e5ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ad0) {
            ctx->pc = 0x1E5AE8u;
            goto label_1e5ae8;
        }
    }
    ctx->pc = 0x1E5AD8u;
    // 0x1e5ad8: 0x10c00087  beqz        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x1E5AD8u;
    {
        const bool branch_taken_0x1e5ad8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AD8u;
        // 0x1e5adc: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ad8) {
            ctx->pc = 0x1E5CF8u;
            goto label_1e5cf8;
        }
    }
    ctx->pc = 0x1E5AE0u;
    // 0x1e5ae0: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1E5AE0u;
    {
        const bool branch_taken_0x1e5ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AE0u;
        // 0x1e5ae4: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ae0) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5AE8u;
label_1e5ae8:
    // 0x1e5ae8: 0x50c80078  beql        $a2, $t0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1E5AE8u;
    {
        const bool branch_taken_0x1e5ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x1e5ae8) {
            ctx->pc = 0x1E5AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5AE8u;
            // 0x1e5aec: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CCCu;
            goto label_1e5ccc;
        }
    }
    ctx->pc = 0x1E5AF0u;
    // 0x1e5af0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5AF0u;
    {
        const bool branch_taken_0x1e5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AF0u;
        // 0x1e5af4: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5af0) {
            ctx->pc = 0x1E5B04u;
            goto label_1e5b04;
        }
    }
    ctx->pc = 0x1E5AF8u;
label_1e5af8:
    // 0x1e5af8: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1e5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1e5afc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1E5AFCu;
    {
        const bool branch_taken_0x1e5afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AFCu;
        // 0x1e5b00: 0xac880008  sw          $t0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5afc) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5B04u;
label_1e5b04:
    // 0x1e5b04: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1E5B04u;
    {
        const bool branch_taken_0x1e5b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B04u;
        // 0x1e5b08: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b04) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5B0Cu;
label_1e5b0c:
    // 0x1e5b0c: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e5b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e5b10: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E5B10u;
    {
        const bool branch_taken_0x1e5b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B10u;
        // 0x1e5b14: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b10) {
            ctx->pc = 0x1E5A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5a98;
        }
    }
    ctx->pc = 0x1E5B18u;
label_1e5b18:
    // 0x1e5b18: 0x8c890100  lw          $t1, 0x100($a0)
    ctx->pc = 0x1e5b18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1e5b1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b20: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1e5b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5b24: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1e5b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5b28: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1e5b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e5b2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e5b30:
    // 0x1e5b30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5b34: 0x5522001b  bnel        $t1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E5B34u;
    {
        const bool branch_taken_0x1e5b34 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5b34) {
            ctx->pc = 0x1E5B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5B34u;
            // 0x1e5b38: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5BA4u;
            goto label_1e5ba4;
        }
    }
    ctx->pc = 0x1E5B3Cu;
    // 0x1e5b3c: 0x8c8301e8  lw          $v1, 0x1E8($a0)
    ctx->pc = 0x1e5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x1e5b40: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e5b44: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5B44u;
    {
        const bool branch_taken_0x1e5b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5b44) {
            ctx->pc = 0x1E5B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5B44u;
            // 0x1e5b48: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5BA4u;
            goto label_1e5ba4;
        }
    }
    ctx->pc = 0x1E5B4Cu;
    // 0x1e5b4c: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x1e5b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1e5b50: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5b54: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5B54u;
    {
        const bool branch_taken_0x1e5b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5b54) {
            ctx->pc = 0x1E5B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5B54u;
            // 0x1e5b58: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5BA4u;
            goto label_1e5ba4;
        }
    }
    ctx->pc = 0x1E5B5Cu;
    // 0x1e5b5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5b60: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E5B60u;
    {
        const bool branch_taken_0x1e5b60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B60u;
        // 0x1e5b64: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b60) {
            ctx->pc = 0x1E5B90u;
            goto label_1e5b90;
        }
    }
    ctx->pc = 0x1E5B68u;
    // 0x1e5b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5B68u;
    {
        const bool branch_taken_0x1e5b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b68) {
            ctx->pc = 0x1E5B80u;
            goto label_1e5b80;
        }
    }
    ctx->pc = 0x1E5B70u;
    // 0x1e5b70: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x1E5B70u;
    {
        const bool branch_taken_0x1e5b70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B70u;
        // 0x1e5b74: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b70) {
            ctx->pc = 0x1E5CF8u;
            goto label_1e5cf8;
        }
    }
    ctx->pc = 0x1E5B78u;
    // 0x1e5b78: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1E5B78u;
    {
        const bool branch_taken_0x1e5b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B78u;
        // 0x1e5b7c: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b78) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5B80u;
label_1e5b80:
    // 0x1e5b80: 0x50c80052  beql        $a2, $t0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1E5B80u;
    {
        const bool branch_taken_0x1e5b80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x1e5b80) {
            ctx->pc = 0x1E5B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5B80u;
            // 0x1e5b84: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CCCu;
            goto label_1e5ccc;
        }
    }
    ctx->pc = 0x1E5B88u;
    // 0x1e5b88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5B88u;
    {
        const bool branch_taken_0x1e5b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B88u;
        // 0x1e5b8c: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b88) {
            ctx->pc = 0x1E5B9Cu;
            goto label_1e5b9c;
        }
    }
    ctx->pc = 0x1E5B90u;
label_1e5b90:
    // 0x1e5b90: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1e5b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1e5b94: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1E5B94u;
    {
        const bool branch_taken_0x1e5b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B94u;
        // 0x1e5b98: 0xac880008  sw          $t0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b94) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5B9Cu;
label_1e5b9c:
    // 0x1e5b9c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1E5B9Cu;
    {
        const bool branch_taken_0x1e5b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B9Cu;
        // 0x1e5ba0: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b9c) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5BA4u;
label_1e5ba4:
    // 0x1e5ba4: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e5ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e5ba8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E5BA8u;
    {
        const bool branch_taken_0x1e5ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BA8u;
        // 0x1e5bac: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ba8) {
            ctx->pc = 0x1E5B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5b30;
        }
    }
    ctx->pc = 0x1E5BB0u;
    // 0x1e5bb0: 0x8c890108  lw          $t1, 0x108($a0)
    ctx->pc = 0x1e5bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x1e5bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5bb8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1e5bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5bbc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1e5bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5bc0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1e5bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e5bc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e5bc8:
    // 0x1e5bc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5bcc: 0x5522001b  bnel        $t1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E5BCCu;
    {
        const bool branch_taken_0x1e5bcc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5bcc) {
            ctx->pc = 0x1E5BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5BCCu;
            // 0x1e5bd0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5C3Cu;
            goto label_1e5c3c;
        }
    }
    ctx->pc = 0x1E5BD4u;
    // 0x1e5bd4: 0x8c8301f0  lw          $v1, 0x1F0($a0)
    ctx->pc = 0x1e5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x1e5bd8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e5bdc: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5BDCu;
    {
        const bool branch_taken_0x1e5bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5bdc) {
            ctx->pc = 0x1E5BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5BDCu;
            // 0x1e5be0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5C3Cu;
            goto label_1e5c3c;
        }
    }
    ctx->pc = 0x1E5BE4u;
    // 0x1e5be4: 0x8c8302d8  lw          $v1, 0x2D8($a0)
    ctx->pc = 0x1e5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x1e5be8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5bec: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5BECu;
    {
        const bool branch_taken_0x1e5bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5bec) {
            ctx->pc = 0x1E5BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5BECu;
            // 0x1e5bf0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5C3Cu;
            goto label_1e5c3c;
        }
    }
    ctx->pc = 0x1E5BF4u;
    // 0x1e5bf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5bf8: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E5BF8u;
    {
        const bool branch_taken_0x1e5bf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BF8u;
        // 0x1e5bfc: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bf8) {
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5C00u;
    // 0x1e5c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5C00u;
    {
        const bool branch_taken_0x1e5c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c00) {
            ctx->pc = 0x1E5C18u;
            goto label_1e5c18;
        }
    }
    ctx->pc = 0x1E5C08u;
    // 0x1e5c08: 0x10c0003b  beqz        $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x1E5C08u;
    {
        const bool branch_taken_0x1e5c08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C08u;
        // 0x1e5c0c: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c08) {
            ctx->pc = 0x1E5CF8u;
            goto label_1e5cf8;
        }
    }
    ctx->pc = 0x1E5C10u;
    // 0x1e5c10: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1E5C10u;
    {
        const bool branch_taken_0x1e5c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C10u;
        // 0x1e5c14: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c10) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5C18u;
label_1e5c18:
    // 0x1e5c18: 0x50c8002c  beql        $a2, $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E5C18u;
    {
        const bool branch_taken_0x1e5c18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x1e5c18) {
            ctx->pc = 0x1E5C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5C18u;
            // 0x1e5c1c: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CCCu;
            goto label_1e5ccc;
        }
    }
    ctx->pc = 0x1E5C20u;
    // 0x1e5c20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5C20u;
    {
        const bool branch_taken_0x1e5c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C20u;
        // 0x1e5c24: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c20) {
            ctx->pc = 0x1E5C34u;
            goto label_1e5c34;
        }
    }
    ctx->pc = 0x1E5C28u;
label_1e5c28:
    // 0x1e5c28: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1e5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1e5c2c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E5C2Cu;
    {
        const bool branch_taken_0x1e5c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C2Cu;
        // 0x1e5c30: 0xac880008  sw          $t0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c2c) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5C34u;
label_1e5c34:
    // 0x1e5c34: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E5C34u;
    {
        const bool branch_taken_0x1e5c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C34u;
        // 0x1e5c38: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c34) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5C3Cu;
label_1e5c3c:
    // 0x1e5c3c: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e5c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e5c40: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E5C40u;
    {
        const bool branch_taken_0x1e5c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C40u;
        // 0x1e5c44: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c40) {
            ctx->pc = 0x1E5BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5bc8;
        }
    }
    ctx->pc = 0x1E5C48u;
label_1e5c48:
    // 0x1e5c48: 0x8c890104  lw          $t1, 0x104($a0)
    ctx->pc = 0x1e5c48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1e5c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c50: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1e5c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5c54: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1e5c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5c58: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1e5c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e5c5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e5c60:
    // 0x1e5c60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5c64: 0x5522001e  bnel        $t1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E5C64u;
    {
        const bool branch_taken_0x1e5c64 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5c64) {
            ctx->pc = 0x1E5C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5C64u;
            // 0x1e5c68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CE0u;
            goto label_1e5ce0;
        }
    }
    ctx->pc = 0x1E5C6Cu;
    // 0x1e5c6c: 0x8c8301ec  lw          $v1, 0x1EC($a0)
    ctx->pc = 0x1e5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x1e5c70: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e5c74: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E5C74u;
    {
        const bool branch_taken_0x1e5c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5c74) {
            ctx->pc = 0x1E5C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5C74u;
            // 0x1e5c78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CE0u;
            goto label_1e5ce0;
        }
    }
    ctx->pc = 0x1E5C7Cu;
    // 0x1e5c7c: 0x8c8302d4  lw          $v1, 0x2D4($a0)
    ctx->pc = 0x1e5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
    // 0x1e5c80: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5c84: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E5C84u;
    {
        const bool branch_taken_0x1e5c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5c84) {
            ctx->pc = 0x1E5C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5C84u;
            // 0x1e5c88: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CE0u;
            goto label_1e5ce0;
        }
    }
    ctx->pc = 0x1E5C8Cu;
    // 0x1e5c8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5c90: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E5C90u;
    {
        const bool branch_taken_0x1e5c90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C90u;
        // 0x1e5c94: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c90) {
            ctx->pc = 0x1E5CC0u;
            goto label_1e5cc0;
        }
    }
    ctx->pc = 0x1E5C98u;
    // 0x1e5c98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5C98u;
    {
        const bool branch_taken_0x1e5c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c98) {
            ctx->pc = 0x1E5CB0u;
            goto label_1e5cb0;
        }
    }
    ctx->pc = 0x1E5CA0u;
    // 0x1e5ca0: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E5CA0u;
    {
        const bool branch_taken_0x1e5ca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CA0u;
        // 0x1e5ca4: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ca0) {
            ctx->pc = 0x1E5CF8u;
            goto label_1e5cf8;
        }
    }
    ctx->pc = 0x1E5CA8u;
    // 0x1e5ca8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E5CA8u;
    {
        const bool branch_taken_0x1e5ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CA8u;
        // 0x1e5cac: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ca8) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5CB0u;
label_1e5cb0:
    // 0x1e5cb0: 0x50c80006  beql        $a2, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5CB0u;
    {
        const bool branch_taken_0x1e5cb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x1e5cb0) {
            ctx->pc = 0x1E5CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5CB0u;
            // 0x1e5cb4: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CCCu;
            goto label_1e5ccc;
        }
    }
    ctx->pc = 0x1E5CB8u;
    // 0x1e5cb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5CB8u;
    {
        const bool branch_taken_0x1e5cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CB8u;
        // 0x1e5cbc: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cb8) {
            ctx->pc = 0x1E5CD8u;
            goto label_1e5cd8;
        }
    }
    ctx->pc = 0x1E5CC0u;
label_1e5cc0:
    // 0x1e5cc0: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1e5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1e5cc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E5CC4u;
    {
        const bool branch_taken_0x1e5cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CC4u;
        // 0x1e5cc8: 0xac880008  sw          $t0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cc4) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5CCCu;
label_1e5ccc:
    // 0x1e5ccc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1e5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e5cd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E5CD0u;
    {
        const bool branch_taken_0x1e5cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CD0u;
        // 0x1e5cd4: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cd0) {
            ctx->pc = 0x1E5D00u;
            goto label_1e5d00;
        }
    }
    ctx->pc = 0x1E5CD8u;
label_1e5cd8:
    // 0x1e5cd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5CD8u;
    {
        const bool branch_taken_0x1e5cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CD8u;
        // 0x1e5cdc: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cd8) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5CE0u;
label_1e5ce0:
    // 0x1e5ce0: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e5ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e5ce4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1E5CE4u;
    {
        const bool branch_taken_0x1e5ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CE4u;
        // 0x1e5ce8: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ce4) {
            ctx->pc = 0x1E5C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5c60;
        }
    }
    ctx->pc = 0x1E5CECu;
    // 0x1e5cec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5cf0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e5cf4:
    // 0x1e5cf4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e5cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e5cf8:
    // 0x1e5cf8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e5cfc:
    // 0x1e5cfc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1e5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1e5d00:
    // 0x1e5d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D00u;
        // 0x1e5d04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5D08u;
}
