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

// Function: DoorBoxObj_constructWide
// Address: 0x17e8d8 - 0x17ea28
void DoorBoxObj_constructWide_0x17e8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoorBoxObj_constructWide_0x17e8d8");
#endif

    switch (ctx->pc) {
        case 0x17e8f8u: goto label_17e8f8;
        case 0x17e980u: goto label_17e980;
        case 0x17e9b0u: goto label_17e9b0;
        case 0x17e9e4u: goto label_17e9e4;
        case 0x17e9f8u: goto label_17e9f8;
        default: break;
    }

    ctx->pc = 0x17e8d8u;

    // 0x17e8d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17e8dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x17e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x17e8e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x17e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x17e8e4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x17e8e8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x17e8e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17e8ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17e8f0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17E8F0u;
    SET_GPR_U32(ctx, 31, 0x17E8F8u);
    ctx->pc = 0x17E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E8F0u;
    // 0x17e8f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17E8F0u, 0x17E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E8F8u;
label_17e8f8:
    // 0x17e8f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17e8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17e8fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17e8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17e900: 0x3c014008  lui         $at, 0x4008
    ctx->pc = 0x17e900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16392 << 16));
    // 0x17e904: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x17e904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x17e908: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17e908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17e90c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x17e90cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17e910: 0x3c014071  lui         $at, 0x4071
    ctx->pc = 0x17e910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16497 << 16));
    // 0x17e914: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x17e914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x17e918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17e918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e91c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x17e91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17e920: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17e920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17e924: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17e924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17e928: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e92c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x17e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x17e930: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x17e930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17e934: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x17e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x17e938: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17e938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17e93c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e940: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x17e940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17e944: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17e944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e948: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17e948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17e94c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17e94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17e950: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x17e950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17e954: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x17e954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17e958: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x17e958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x17e95c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x17e95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x17e960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17e960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e964: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x17e964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e968: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x17e968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x17e96c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17e96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17e970: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x17e970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x17e974: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x17e974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17e978: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x17E978u;
    SET_GPR_U32(ctx, 31, 0x17E980u);
    ctx->pc = 0x17E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E978u;
    // 0x17e97c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x17E978u, 0x17E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E980u;
label_17e980:
    // 0x17e980: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17E980u;
    {
        const bool branch_taken_0x17e980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E980u;
        // 0x17e984: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e980) {
            ctx->pc = 0x17E9B0u;
            goto label_17e9b0;
        }
    }
    ctx->pc = 0x17E988u;
    // 0x17e988: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x17e988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e98c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x17e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17e990: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17e990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17e994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e998: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x17e998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x17e99c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17e99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9a0: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x17e9a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x17e9a4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17e9a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9a8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x17E9A8u;
    SET_GPR_U32(ctx, 31, 0x17E9B0u);
    ctx->pc = 0x17E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E9A8u;
    // 0x17e9ac: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x17E9A8u, 0x17E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9B0u;
label_17e9b0:
    // 0x17e9b0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17e9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e9b4: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x17e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x17e9b8: 0xa6110548  sh          $s1, 0x548($s0)
    ctx->pc = 0x17e9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 17));
    // 0x17e9bc: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E9BCu;
    {
        const bool branch_taken_0x17e9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x17E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9BCu;
        // 0x17e9c0: 0xa611054a  sh          $s1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9bc) {
            ctx->pc = 0x17E9DCu;
            goto label_17e9dc;
        }
    }
    ctx->pc = 0x17E9C4u;
    // 0x17e9c4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x17e9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e9c8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x17e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e9cc: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x17e9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x17e9d0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17e9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17e9d4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e9d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17e9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17e9dc:
    // 0x17e9dc: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x17E9DCu;
    SET_GPR_U32(ctx, 31, 0x17E9E4u);
    ctx->pc = 0x17E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E9DCu;
    // 0x17e9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x17E9DCu, 0x17E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9E4u;
label_17e9e4:
    // 0x17e9e4: 0xa2110624  sb          $s1, 0x624($s0)
    ctx->pc = 0x17e9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 17));
    // 0x17e9e8: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x17e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x17e9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9f0: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x17E9F0u;
    SET_GPR_U32(ctx, 31, 0x17E9F8u);
    ctx->pc = 0x17E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E9F0u;
    // 0x17e9f4: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x17E9F0u, 0x17E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9F8u;
label_17e9f8:
    // 0x17e9f8: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x17e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x17e9fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ea00: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x17ea00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ea04: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x17ea04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x17ea08: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x17ea08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ea0c: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x17ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x17ea10: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17ea10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17ea14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17ea14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ea18: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x17ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ea1c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA1Cu;
        // 0x17ea20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EA24u;
    // 0x17ea24: 0x0  nop
    ctx->pc = 0x17ea24u;
    // NOP
    ctx->pc = 0x17ea28u;
}
