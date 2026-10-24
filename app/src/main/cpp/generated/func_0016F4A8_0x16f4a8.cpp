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

// Function: func_0016F4A8
// Address: 0x16f4a8 - 0x16f5e8
void func_0016F4A8_0x16f4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016F4A8_0x16f4a8");
#endif

    switch (ctx->pc) {
        case 0x16f4c8u: goto label_16f4c8;
        case 0x16f534u: goto label_16f534;
        case 0x16f564u: goto label_16f564;
        case 0x16f5a8u: goto label_16f5a8;
        case 0x16f5c4u: goto label_16f5c4;
        default: break;
    }

    ctx->pc = 0x16f4a8u;

    // 0x16f4a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16f4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16f4ac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x16f4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16f4b0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x16f4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x16f4b4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16f4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16f4b8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x16f4b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x16f4bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16f4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16f4c0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x16F4C0u;
    SET_GPR_U32(ctx, 31, 0x16F4C8u);
    ctx->pc = 0x16F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F4C0u;
    // 0x16f4c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x16F4C0u, 0x16F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F4C8u;
label_16f4c8:
    // 0x16f4c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16f4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16f4cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16f4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16f4d0: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x16f4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x16f4d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x16f4d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x16f4d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16f4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f4dc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x16f4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16f4e0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x16f4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x16f4e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x16f4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x16f4e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16f4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16f4ec: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16f4f0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x16f4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16f4f4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16f4f8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x16f4f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16f4fc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x16f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x16f500: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x16f500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16f504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f508: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x16f508u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16f50c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16f50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f510: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x16f510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16f514: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x16f514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x16f518: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x16f518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16f51c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x16f51cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x16f520: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x16f520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x16f524: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x16f524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x16f528: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x16f528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x16f52c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x16F52Cu;
    SET_GPR_U32(ctx, 31, 0x16F534u);
    ctx->pc = 0x16F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F52Cu;
    // 0x16f530: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x16F52Cu, 0x16F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F534u;
label_16f534:
    // 0x16f534: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16F534u;
    {
        const bool branch_taken_0x16f534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F534u;
        // 0x16f538: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f534) {
            ctx->pc = 0x16F564u;
            goto label_16f564;
        }
    }
    ctx->pc = 0x16F53Cu;
    // 0x16f53c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x16f53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16f540: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x16f540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x16f544: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x16f544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x16f548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f54c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x16f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x16f550: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16f550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f554: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x16f554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x16f558: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16f558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f55c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x16F55Cu;
    SET_GPR_U32(ctx, 31, 0x16F564u);
    ctx->pc = 0x16F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F55Cu;
    // 0x16f560: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x16F55Cu, 0x16F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F564u;
label_16f564:
    // 0x16f564: 0x24070258  addiu       $a3, $zero, 0x258
    ctx->pc = 0x16f564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x16f568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f56c: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x16f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x16f570: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x16f570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16f574: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16f574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f578: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x16f578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x16f57c: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x16f57cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x16f580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f584: 0xae0705f0  sw          $a3, 0x5F0($s0)
    ctx->pc = 0x16f584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 7));
    // 0x16f588: 0xae0705e8  sw          $a3, 0x5E8($s0)
    ctx->pc = 0x16f588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 7));
    // 0x16f58c: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x16f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x16f590: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x16f590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x16f594: 0xa60605f4  sh          $a2, 0x5F4($s0)
    ctx->pc = 0x16f594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f598: 0xae0205ec  sw          $v0, 0x5EC($s0)
    ctx->pc = 0x16f598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 2));
    // 0x16f59c: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x16f59cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f5a0: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x16F5A0u;
    SET_GPR_U32(ctx, 31, 0x16F5A8u);
    ctx->pc = 0x16F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5A0u;
    // 0x16f5a4: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x16F5A0u, 0x16F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5A8u;
label_16f5a8:
    // 0x16f5a8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x16f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x16f5ac: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x16f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x16f5b0: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x16f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x16f5b4: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x16f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x16f5b8: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x16f5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16f5bc: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x16F5BCu;
    SET_GPR_U32(ctx, 31, 0x16F5C4u);
    ctx->pc = 0x16F5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5BCu;
    // 0x16f5c0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x16F5BCu, 0x16F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5C4u;
label_16f5c4:
    // 0x16f5c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16f5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f5c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f5cc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16f5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f5d0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16f5d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f5d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16f5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f5d8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x16f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16f5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x16F5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5DCu;
        // 0x16f5e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F5E4u;
    // 0x16f5e4: 0x0  nop
    ctx->pc = 0x16f5e4u;
    // NOP
    ctx->pc = 0x16f5e8u;
}
