#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079B388
// Address: 0x79b388 - 0x79b4a0
void func_0079B388_0x79b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B388_0x79b388");
#endif

    switch (ctx->pc) {
        case 0x79b430u: goto label_79b430;
        case 0x79b45cu: goto label_79b45c;
        case 0x79b46cu: goto label_79b46c;
        case 0x79b494u: goto label_79b494;
        default: break;
    }

    ctx->pc = 0x79b388u;

    // 0x79b388: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79b38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b394: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b398: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79b398u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b39c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b3a0: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79b3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b3a4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b3a8: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x79b3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b3ac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x79b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b3b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b3b4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79b3b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79b3bc: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79b3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79b3c0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79b3c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x79b3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b3c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79b3cc: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79b3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79b3d0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79b3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b3d4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x79b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x79b3d8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x79b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x79b3dc: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x79b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x79b3e0: 0xafbd0050  sw          $sp, 0x50($sp)
    ctx->pc = 0x79b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 29));
    // 0x79b3e4: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x79b3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b3e8: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x79b3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b3ec: 0x6ba3005f  ldl         $v1, 0x5F($sp)
    ctx->pc = 0x79b3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79b3f0: 0x6fa30058  ldr         $v1, 0x58($sp)
    ctx->pc = 0x79b3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79b3f4: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x79b3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b3f8: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x79b3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b3fc: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x79b3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b400: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x79b400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b404: 0x24a6c5c8  addiu       $a2, $a1, -0x3A38
    ctx->pc = 0x79b404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952392));
    // 0x79b408: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x79b408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b40c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x79b40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b410: 0x68c3000f  ldl         $v1, 0xF($a2)
    ctx->pc = 0x79b410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79b414: 0x6cc30008  ldr         $v1, 0x8($a2)
    ctx->pc = 0x79b414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79b418: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x79b418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b41c: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x79b41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b420: 0xb3a3005f  sdl         $v1, 0x5F($sp)
    ctx->pc = 0x79b420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b424: 0xb7a30058  sdr         $v1, 0x58($sp)
    ctx->pc = 0x79b424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b428: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79b428u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
    // 0x79b42c: 0x0  nop
    ctx->pc = 0x79b42cu;
    // NOP
label_79b430:
    // 0x79b430: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79b430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b434: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x79b434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b438: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x79b438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79b43c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B43Cu;
    {
        const bool branch_taken_0x79b43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B43Cu;
        // 0x79b440: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b43c) {
            ctx->pc = 0x79B454u;
            goto label_79b454;
        }
    }
    ctx->pc = 0x79B444u;
    // 0x79b444: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B444u;
    {
        const bool branch_taken_0x79b444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B444u;
        // 0x79b448: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b444) {
            ctx->pc = 0x79B464u;
            goto label_79b464;
        }
    }
    ctx->pc = 0x79B44Cu;
    // 0x79b44c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79B44Cu;
    {
        const bool branch_taken_0x79b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B44Cu;
        // 0x79b450: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b44c) {
            ctx->pc = 0x79B48Cu;
            goto label_79b48c;
        }
    }
    ctx->pc = 0x79B454u;
label_79b454:
    // 0x79b454: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B454u;
    SET_GPR_U32(ctx, 31, 0x79B45Cu);
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B454u, 0x79B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B45Cu;
label_79b45c:
    // 0x79b45c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79B45Cu;
    {
        const bool branch_taken_0x79b45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B45Cu;
        // 0x79b460: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b45c) {
            ctx->pc = 0x79B478u;
            goto label_79b478;
        }
    }
    ctx->pc = 0x79B464u;
label_79b464:
    // 0x79b464: 0xc1e6eea  jal         func_79BBA8
    ctx->pc = 0x79B464u;
    SET_GPR_U32(ctx, 31, 0x79B46Cu);
    ctx->pc = 0x79BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BBA8u, 0x79B464u, 0x79B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B46Cu;
label_79b46c:
    // 0x79b46c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B46Cu;
    {
        const bool branch_taken_0x79b46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B46Cu;
        // 0x79b470: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b46c) {
            ctx->pc = 0x79B488u;
            goto label_79b488;
        }
    }
    ctx->pc = 0x79B474u;
    // 0x79b474: 0x8e03c800  lw          $v1, -0x3800($s0)
    ctx->pc = 0x79b474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
label_79b478:
    // 0x79b478: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x79b478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79b47c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b480: 0xa0620014  sb          $v0, 0x14($v1)
    ctx->pc = 0x79b480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b484: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b488:
    // 0x79b488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b48c:
    // 0x79b48c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B48Cu;
    SET_GPR_U32(ctx, 31, 0x79B494u);
    ctx->pc = 0x79B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B48Cu;
    // 0x79b490: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B48Cu, 0x79B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B494u;
label_79b494:
    // 0x79b494: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x79B494u;
    {
        const bool branch_taken_0x79b494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B494u;
        // 0x79b498: 0x8e02c800  lw          $v0, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b494) {
            ctx->pc = 0x79B430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b430;
        }
    }
    ctx->pc = 0x79B49Cu;
    // 0x79b49c: 0x0  nop
    ctx->pc = 0x79b49cu;
    // NOP
    ctx->pc = 0x79b4a0u;
}
} // namespace gh_r040
