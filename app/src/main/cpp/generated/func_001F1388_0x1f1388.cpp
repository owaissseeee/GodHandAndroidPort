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

// Function: func_001F1388
// Address: 0x1f1388 - 0x1f14c8
void func_001F1388_0x1f1388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F1388_0x1f1388");
#endif

    switch (ctx->pc) {
        case 0x1f1410u: goto label_1f1410;
        case 0x1f1424u: goto label_1f1424;
        case 0x1f1440u: goto label_1f1440;
        case 0x1f1450u: goto label_1f1450;
        case 0x1f147cu: goto label_1f147c;
        case 0x1f1490u: goto label_1f1490;
        default: break;
    }

    ctx->pc = 0x1f1388u;

    // 0x1f1388: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f1388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f138c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1f138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1f1390: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f1390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f1394: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f1394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f1398: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f1398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f139c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f139cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f13a0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1f13a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f13a4: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x1f13a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1f13a8: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x1f13a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f13ac: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x1f13acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f13b0: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1f13b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f13b4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1f13b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1f13b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f13b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f13bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f13bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f13c0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1f13c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f13c4: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1f13c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f13c8: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x1f13c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x1f13cc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f13ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f13d0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1f13d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1f13d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f13d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f13d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f13d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f13dc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1f13dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1f13e0: 0x2446bee0  addiu       $a2, $v0, -0x4120
    ctx->pc = 0x1f13e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950624));
    // 0x1f13e4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1f13e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f13e8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1f13e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f13ec: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1f13ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f13f0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1f13f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f13f4: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1f13f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x42BEF0u));
    // 0x1f13f8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1f13f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f13fc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1f13fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1400: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1f1400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1404: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1f1404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1408: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1f1408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1f140c: 0x0  nop
    ctx->pc = 0x1f140cu;
    // NOP
label_1f1410:
    // 0x1f1410: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1f1410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1f1414: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f1414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f1418: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1f1418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1f141c: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x1F141Cu;
    SET_GPR_U32(ctx, 31, 0x1F1424u);
    ctx->pc = 0x1F1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F141Cu;
    // 0x1f1420: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1F141Cu, 0x1F1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1424u;
label_1f1424:
    // 0x1f1424: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f1424u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f1428: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f1428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f142c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f142cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f1430: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f1430u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1f1434: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f1434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f1438: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x1F1438u;
    SET_GPR_U32(ctx, 31, 0x1F1440u);
    ctx->pc = 0x1F143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1438u;
    // 0x1f143c: 0x3a28021  addu        $s0, $sp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1F1438u, 0x1F1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1440u;
label_1f1440:
    // 0x1f1440: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f1440u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f1444: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f1444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f1448: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x1F1448u;
    SET_GPR_U32(ctx, 31, 0x1F1450u);
    ctx->pc = 0x1F144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1448u;
    // 0x1f144c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1F1448u, 0x1F1450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1450u;
label_1f1450:
    // 0x1f1450: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1f1450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f1454: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f1454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f1458: 0xe7b70024  swc1        $f23, 0x24($sp)
    ctx->pc = 0x1f1458u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f145c: 0x3c01c048  lui         $at, 0xC048
    ctx->pc = 0x1f145cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49224 << 16));
    // 0x1f1460: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1f1460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1f1464: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f1464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1468: 0x3c014048  lui         $at, 0x4048
    ctx->pc = 0x1f1468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16456 << 16));
    // 0x1f146c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1f146cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1f1470: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f1470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f1474: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x1F1474u;
    SET_GPR_U32(ctx, 31, 0x1F147Cu);
    ctx->pc = 0x1F1478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1474u;
    // 0x1f1478: 0xe638000c  swc1        $f24, 0xC($s1) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1F1474u, 0x1F147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F147Cu;
label_1f147c:
    // 0x1f147c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f147cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f1480: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f1480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f1484: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f1484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1488: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F1488u;
    SET_GPR_U32(ctx, 31, 0x1F1490u);
    ctx->pc = 0x1F148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1488u;
    // 0x1f148c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F1488u, 0x1F1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1490u;
label_1f1490:
    // 0x1f1490: 0x641ffdf  bgez        $s2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1F1490u;
    {
        const bool branch_taken_0x1f1490 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1F1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1490u;
        // 0x1f1494: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1490) {
            ctx->pc = 0x1F1410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1410;
        }
    }
    ctx->pc = 0x1F1498u;
    // 0x1f1498: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f1498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f149c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f149cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f14a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f14a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f14a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f14a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f14a8: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x1f14a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f14ac: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x1f14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f14b0: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x1f14b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f14b4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1f14b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f14b8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1f14b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f14bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F14BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14BCu;
        // 0x1f14c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F14BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F14C4u;
    // 0x1f14c4: 0x0  nop
    ctx->pc = 0x1f14c4u;
    // NOP
    ctx->pc = 0x1f14c8u;
}
