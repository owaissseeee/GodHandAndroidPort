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

// Function: cPlCamera_callFollow
// Address: 0x13b388 - 0x13b450
void cPlCamera_callFollow_0x13b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPlCamera_callFollow_0x13b388");
#endif

    switch (ctx->pc) {
        case 0x13b388u: goto label_13b388;
        case 0x13b38cu: goto label_13b38c;
        case 0x13b390u: goto label_13b390;
        case 0x13b394u: goto label_13b394;
        case 0x13b398u: goto label_13b398;
        case 0x13b39cu: goto label_13b39c;
        case 0x13b3a0u: goto label_13b3a0;
        case 0x13b3a4u: goto label_13b3a4;
        case 0x13b3a8u: goto label_13b3a8;
        case 0x13b3acu: goto label_13b3ac;
        case 0x13b3b0u: goto label_13b3b0;
        case 0x13b3b4u: goto label_13b3b4;
        case 0x13b3b8u: goto label_13b3b8;
        case 0x13b3bcu: goto label_13b3bc;
        case 0x13b3c0u: goto label_13b3c0;
        case 0x13b3c4u: goto label_13b3c4;
        case 0x13b3c8u: goto label_13b3c8;
        case 0x13b3ccu: goto label_13b3cc;
        case 0x13b3d0u: goto label_13b3d0;
        case 0x13b3d4u: goto label_13b3d4;
        case 0x13b3d8u: goto label_13b3d8;
        case 0x13b3dcu: goto label_13b3dc;
        case 0x13b3e0u: goto label_13b3e0;
        case 0x13b3e4u: goto label_13b3e4;
        case 0x13b3e8u: goto label_13b3e8;
        case 0x13b3ecu: goto label_13b3ec;
        case 0x13b3f0u: goto label_13b3f0;
        case 0x13b3f4u: goto label_13b3f4;
        case 0x13b3f8u: goto label_13b3f8;
        case 0x13b3fcu: goto label_13b3fc;
        case 0x13b400u: goto label_13b400;
        case 0x13b404u: goto label_13b404;
        case 0x13b408u: goto label_13b408;
        case 0x13b40cu: goto label_13b40c;
        case 0x13b410u: goto label_13b410;
        case 0x13b414u: goto label_13b414;
        case 0x13b418u: goto label_13b418;
        case 0x13b41cu: goto label_13b41c;
        case 0x13b420u: goto label_13b420;
        case 0x13b424u: goto label_13b424;
        case 0x13b428u: goto label_13b428;
        case 0x13b42cu: goto label_13b42c;
        case 0x13b430u: goto label_13b430;
        case 0x13b434u: goto label_13b434;
        case 0x13b438u: goto label_13b438;
        case 0x13b43cu: goto label_13b43c;
        case 0x13b440u: goto label_13b440;
        case 0x13b444u: goto label_13b444;
        case 0x13b448u: goto label_13b448;
        case 0x13b44cu: goto label_13b44c;
        default: break;
    }

    ctx->pc = 0x13b388u;

label_13b388:
    // 0x13b388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13b38c:
    // 0x13b38c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13b38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13b390:
    // 0x13b390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13b394:
    // 0x13b394: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13b394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_13b398:
    // 0x13b398: 0x8cc304f0  lw          $v1, 0x4F0($a2)
    ctx->pc = 0x13b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1264)));
label_13b39c:
    // 0x13b39c: 0x2449dba0  addiu       $t1, $v0, -0x2460
    ctx->pc = 0x13b39cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957984));
label_13b3a0:
    // 0x13b3a0: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x13b3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_13b3a4:
    // 0x13b3a4: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x13b3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_13b3a8:
    // 0x13b3a8: 0x6925000f  ldl         $a1, 0xF($t1)
    ctx->pc = 0x13b3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_13b3ac:
    // 0x13b3ac: 0x6d250008  ldr         $a1, 0x8($t1)
    ctx->pc = 0x13b3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_13b3b0:
    // 0x13b3b0: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x13b3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13b3b4:
    // 0x13b3b4: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x13b3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13b3b8:
    // 0x13b3b8: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x13b3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13b3bc:
    // 0x13b3bc: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x13b3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13b3c0:
    // 0x13b3c0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_13b3c4:
    // 0x13b3c4: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x13b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_13b3c8:
    // 0x13b3c8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x13b3c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_13b3cc:
    // 0x13b3cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_13b3d0:
    // 0x13b3d0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x13b3d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_13b3d4:
    // 0x13b3d4: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_13b3d8:
    if (ctx->pc == 0x13B3D8u) {
        ctx->pc = 0x13B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3D4u;
        // 0x13b3d8: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B3DCu;
        goto label_13b3dc;
    }
    ctx->pc = 0x13B3D4u;
    {
        const bool branch_taken_0x13b3d4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x13B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3D4u;
        // 0x13b3d8: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3d4) {
            ctx->pc = 0x13B408u;
            goto label_13b408;
        }
    }
    ctx->pc = 0x13B3DCu;
label_13b3dc:
    // 0x13b3dc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x13b3dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_13b3e0:
    // 0x13b3e0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_13b3e4:
    // 0x13b3e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_13b3e8:
    // 0x13b3e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x13b3e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_13b3ec:
    // 0x13b3ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x13b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_13b3f0:
    // 0x13b3f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b3f4:
    // 0x13b3f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_13b3f8:
    // 0x13b3f8: 0xdc88fff8  ld          $t0, -0x8($a0)
    ctx->pc = 0x13b3f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_13b3fc:
    // 0x13b3fc: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x13b3fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_13b400:
    // 0x13b400: 0x10000004  b           . + 4 + (0x4 << 2)
label_13b404:
    if (ctx->pc == 0x13B404u) {
        ctx->pc = 0x13B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B400u;
        // 0x13b404: 0x8cc204f0  lw          $v0, 0x4F0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B408u;
        goto label_13b408;
    }
    ctx->pc = 0x13B400u;
    {
        const bool branch_taken_0x13b400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B400u;
        // 0x13b404: 0x8cc204f0  lw          $v0, 0x4F0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b400) {
            ctx->pc = 0x13B414u;
            goto label_13b414;
        }
    }
    ctx->pc = 0x13B408u;
label_13b408:
    // 0x13b408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13b40c:
    // 0x13b40c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x13b40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b410:
    // 0x13b410: 0x8cc204f0  lw          $v0, 0x4F0($a2)
    ctx->pc = 0x13b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1264)));
label_13b414:
    // 0x13b414: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13b414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_13b418:
    // 0x13b418: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x13b418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_13b41c:
    // 0x13b41c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_13b420:
    if (ctx->pc == 0x13B420u) {
        ctx->pc = 0x13B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B41Cu;
        // 0x13b420: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B424u;
        goto label_13b424;
    }
    ctx->pc = 0x13B41Cu;
    {
        const bool branch_taken_0x13b41c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x13B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B41Cu;
        // 0x13b420: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b41c) {
            ctx->pc = 0x13B438u;
            goto label_13b438;
        }
    }
    ctx->pc = 0x13B424u;
label_13b424:
    // 0x13b424: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x13b424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_13b428:
    // 0x13b428: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13b428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_13b42c:
    // 0x13b42c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x13b42cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_13b430:
    // 0x13b430: 0x10000002  b           . + 4 + (0x2 << 2)
label_13b434:
    if (ctx->pc == 0x13B434u) {
        ctx->pc = 0x13B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B430u;
        // 0x13b434: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B438u;
        goto label_13b438;
    }
    ctx->pc = 0x13B430u;
    {
        const bool branch_taken_0x13b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B430u;
        // 0x13b434: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b430) {
            ctx->pc = 0x13B43Cu;
            goto label_13b43c;
        }
    }
    ctx->pc = 0x13B438u;
label_13b438:
    // 0x13b438: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13b438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13b43c:
    // 0x13b43c: 0xe0f809  jalr        $a3
label_13b440:
    if (ctx->pc == 0x13B440u) {
        ctx->pc = 0x13B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B43Cu;
        // 0x13b440: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B444u;
        goto label_13b444;
    }
    ctx->pc = 0x13B43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x13B444u);
        ctx->pc = 0x13B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B43Cu;
        // 0x13b440: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B43Cu, 0x13B444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B444u;
label_13b444:
    // 0x13b444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13b448:
    // 0x13b448: 0x3e00008  jr          $ra
label_13b44c:
    if (ctx->pc == 0x13B44Cu) {
        ctx->pc = 0x13B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B448u;
        // 0x13b44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B450u;
        goto label_fallthrough_0x13b448;
    }
    ctx->pc = 0x13B448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B448u;
        // 0x13b44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13b448:
    ctx->pc = 0x13B450u;
}
