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

// Function: func_00192D20
// Address: 0x192d20 - 0x192ef8
void func_00192D20_0x192d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00192D20_0x192d20");
#endif

    switch (ctx->pc) {
        case 0x192d50u: goto label_192d50;
        case 0x192e24u: goto label_192e24;
        case 0x192e5cu: goto label_192e5c;
        case 0x192e84u: goto label_192e84;
        case 0x192ec8u: goto label_192ec8;
        default: break;
    }

    ctx->pc = 0x192d20u;

    // 0x192d20: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x192d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x192d24: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x192d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x192d28: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x192d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x192d2c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x192d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x192d30: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x192d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x192d34: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x192d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x192d38: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x192d38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x192d3c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x192d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x192d40: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x192d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x192d44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x192d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x192d48: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x192D48u;
    SET_GPR_U32(ctx, 31, 0x192D50u);
    ctx->pc = 0x192D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D48u;
    // 0x192d4c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x192D48u, 0x192D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D50u;
label_192d50:
    // 0x192d50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x192d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x192d54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x192d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x192d58: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x192d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x192d5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x192d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x192d60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x192d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x192d64: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x192d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x192d68: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x192d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x192d6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x192d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x192d70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192d74: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x192d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192d78: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x192d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x192d7c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x192d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x192d80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192d84: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x192d84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192d88: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x192d88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x192d8c: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x192d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x192d90: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x192d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x192d94: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x192d98: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x192d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x192d9c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x192d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x192da0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x192da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x192da4: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x192da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x192da8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x192da8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x192dac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x192dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192db0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x192db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x192db4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x192db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192db8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x192db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x192dbc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x192dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x192dc0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x192dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x192dc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x192dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x192dc8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x192dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192dcc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x192dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192dd0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x192dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192dd4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x192dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x192dd8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x192dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x192ddc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x192ddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x192de0: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x192de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x192de4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x192de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192de8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x192de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192dec: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x192decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192df0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x192df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x192df4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x192df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x192df8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x192df8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x192dfc: 0xe6d4000c  swc1        $f20, 0xC($s6)
    ctx->pc = 0x192dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x192e00: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x192e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x192e04: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x192e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x192e08: 0xe6740008  swc1        $f20, 0x8($s3)
    ctx->pc = 0x192e08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x192e0c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x192e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x192e10: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x192e10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x192e14: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x192e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x192e18: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x192e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x192e1c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x192E1Cu;
    SET_GPR_U32(ctx, 31, 0x192E24u);
    ctx->pc = 0x192E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E1Cu;
    // 0x192e20: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x192E1Cu, 0x192E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E24u;
label_192e24:
    // 0x192e24: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x192E24u;
    {
        const bool branch_taken_0x192e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E24u;
        // 0x192e28: 0xae420600  sw          $v0, 0x600($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e24) {
            ctx->pc = 0x192E84u;
            goto label_192e84;
        }
    }
    ctx->pc = 0x192E2Cu;
    // 0x192e2c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x192e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x192e30: 0x26510080  addiu       $s1, $s2, 0x80
    ctx->pc = 0x192e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x192e34: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x192e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x192e38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e3c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x192e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x192e40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x192e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e44: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x192e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x192e48: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x192e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x192e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e54: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x192E54u;
    SET_GPR_U32(ctx, 31, 0x192E5Cu);
    ctx->pc = 0x192E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E54u;
    // 0x192e58: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x192E54u, 0x192E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E5Cu;
label_192e5c:
    // 0x192e5c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x192e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x192e60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e64: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x192e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x192e68: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x192e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e6c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x192e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x192e70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x192e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e74: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x192e74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e78: 0x8e440600  lw          $a0, 0x600($s2)
    ctx->pc = 0x192e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x192e7c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x192E7Cu;
    SET_GPR_U32(ctx, 31, 0x192E84u);
    ctx->pc = 0x192E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E7Cu;
    // 0x192e80: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x192E7Cu, 0x192E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E84u;
label_192e84:
    // 0x192e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192e88: 0x26450620  addiu       $a1, $s2, 0x620
    ctx->pc = 0x192e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
    // 0x192e8c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x192e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x192e90: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x192e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x192e94: 0xae4005e8  sw          $zero, 0x5E8($s2)
    ctx->pc = 0x192e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1512), GPR_U32(ctx, 0));
    // 0x192e98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x192e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192e9c: 0xae4005e4  sw          $zero, 0x5E4($s2)
    ctx->pc = 0x192e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1508), GPR_U32(ctx, 0));
    // 0x192ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ea4: 0xae4005f0  sw          $zero, 0x5F0($s2)
    ctx->pc = 0x192ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
    // 0x192ea8: 0xa64005f6  sh          $zero, 0x5F6($s2)
    ctx->pc = 0x192ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x192eac: 0xa643054a  sh          $v1, 0x54A($s2)
    ctx->pc = 0x192eacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x192eb0: 0xae450608  sw          $a1, 0x608($s2)
    ctx->pc = 0x192eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 5));
    // 0x192eb4: 0xa246060c  sb          $a2, 0x60C($s2)
    ctx->pc = 0x192eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x192eb8: 0xae4705ec  sw          $a3, 0x5EC($s2)
    ctx->pc = 0x192eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1516), GPR_U32(ctx, 7));
    // 0x192ebc: 0xa6430548  sh          $v1, 0x548($s2)
    ctx->pc = 0x192ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x192ec0: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x192EC0u;
    SET_GPR_U32(ctx, 31, 0x192EC8u);
    ctx->pc = 0x192EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EC0u;
    // 0x192ec4: 0xa64205f4  sh          $v0, 0x5F4($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x192EC0u, 0x192EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192EC8u;
label_192ec8:
    // 0x192ec8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x192ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x192ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192ed0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x192ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x192ed4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x192ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x192ed8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x192ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x192edc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x192edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x192ee0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x192ee0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x192ee4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x192ee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192ee8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x192ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192eec: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x192eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x192EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EF0u;
        // 0x192ef4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192EF8u;
}
