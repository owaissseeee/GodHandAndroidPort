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

// Function: DoorObj_construct
// Address: 0x1a8200 - 0x1a82d8
void DoorObj_construct_0x1a8200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoorObj_construct_0x1a8200");
#endif

    switch (ctx->pc) {
        case 0x1a8218u: goto label_1a8218;
        case 0x1a829cu: goto label_1a829c;
        case 0x1a82b0u: goto label_1a82b0;
        default: break;
    }

    ctx->pc = 0x1a8200u;

    // 0x1a8200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a8204: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a8204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a8208: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a8208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a820c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a820cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8210: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A8210u;
    SET_GPR_U32(ctx, 31, 0x1A8218u);
    ctx->pc = 0x1A8214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8210u;
    // 0x1a8214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A8210u, 0x1A8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8218u;
label_1a8218:
    // 0x1a8218: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a8218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a821c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a821cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a8220: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a8220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a8224: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x1a8224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1a8228: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1a8228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1a822c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a822cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8230: 0x3c01406c  lui         $at, 0x406C
    ctx->pc = 0x1a8230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16492 << 16));
    // 0x1a8234: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a8234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a8238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a8238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a823c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a823cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1a8240: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a8240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a8244: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a8244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a8248: 0x3c01bfa0  lui         $at, 0xBFA0
    ctx->pc = 0x1a8248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49056 << 16));
    // 0x1a824c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a824cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a8250: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a8250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a8254: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a8254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a8258: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a8258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a825c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1a825cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a8260: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x1a8260u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a8264: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1a8264u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a8268: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a8268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1a826c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a826cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1a8270: 0xa6110548  sh          $s1, 0x548($s0)
    ctx->pc = 0x1a8270u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 17));
    // 0x1a8274: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8274u;
    {
        const bool branch_taken_0x1a8274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1A8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8274u;
        // 0x1a8278: 0xa611054a  sh          $s1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8274) {
            ctx->pc = 0x1A8294u;
            goto label_1a8294;
        }
    }
    ctx->pc = 0x1A827Cu;
    // 0x1a827c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8280: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a8280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8284: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x1a8284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x1a8288: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a8288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a828c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8290: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a8290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a8294:
    // 0x1a8294: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x1A8294u;
    SET_GPR_U32(ctx, 31, 0x1A829Cu);
    ctx->pc = 0x1A8298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8294u;
    // 0x1a8298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x1A8294u, 0x1A829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A829Cu;
label_1a829c:
    // 0x1a829c: 0xa2110624  sb          $s1, 0x624($s0)
    ctx->pc = 0x1a829cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 17));
    // 0x1a82a0: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x1a82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1a82a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a82a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82a8: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x1A82A8u;
    SET_GPR_U32(ctx, 31, 0x1A82B0u);
    ctx->pc = 0x1A82ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82A8u;
    // 0x1a82ac: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x1A82A8u, 0x1A82B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A82B0u;
label_1a82b0:
    // 0x1a82b0: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1a82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1a82b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a82b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a82b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a82bc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1a82bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1a82c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a82c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a82c4: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1a82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1a82c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a82c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a82cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A82CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82CCu;
        // 0x1a82d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A82CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A82D4u;
    // 0x1a82d4: 0x0  nop
    ctx->pc = 0x1a82d4u;
    // NOP
    ctx->pc = 0x1a82d8u;
}
