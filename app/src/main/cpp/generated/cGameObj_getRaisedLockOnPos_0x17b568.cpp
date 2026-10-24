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

// Function: cGameObj_getRaisedLockOnPos
// Address: 0x17b568 - 0x17b5e0
void cGameObj_getRaisedLockOnPos_0x17b568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_getRaisedLockOnPos_0x17b568");
#endif

    switch (ctx->pc) {
        case 0x17b568u: goto label_17b568;
        case 0x17b56cu: goto label_17b56c;
        case 0x17b570u: goto label_17b570;
        case 0x17b574u: goto label_17b574;
        case 0x17b578u: goto label_17b578;
        case 0x17b57cu: goto label_17b57c;
        case 0x17b580u: goto label_17b580;
        case 0x17b584u: goto label_17b584;
        case 0x17b588u: goto label_17b588;
        case 0x17b58cu: goto label_17b58c;
        case 0x17b590u: goto label_17b590;
        case 0x17b594u: goto label_17b594;
        case 0x17b598u: goto label_17b598;
        case 0x17b59cu: goto label_17b59c;
        case 0x17b5a0u: goto label_17b5a0;
        case 0x17b5a4u: goto label_17b5a4;
        case 0x17b5a8u: goto label_17b5a8;
        case 0x17b5acu: goto label_17b5ac;
        case 0x17b5b0u: goto label_17b5b0;
        case 0x17b5b4u: goto label_17b5b4;
        case 0x17b5b8u: goto label_17b5b8;
        case 0x17b5bcu: goto label_17b5bc;
        case 0x17b5c0u: goto label_17b5c0;
        case 0x17b5c4u: goto label_17b5c4;
        case 0x17b5c8u: goto label_17b5c8;
        case 0x17b5ccu: goto label_17b5cc;
        case 0x17b5d0u: goto label_17b5d0;
        case 0x17b5d4u: goto label_17b5d4;
        case 0x17b5d8u: goto label_17b5d8;
        case 0x17b5dcu: goto label_17b5dc;
        default: break;
    }

    ctx->pc = 0x17b568u;

label_17b568:
    // 0x17b568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17b56c:
    // 0x17b56c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17b56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17b570:
    // 0x17b570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17b574:
    // 0x17b574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b578:
    // 0x17b578: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x17b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_17b57c:
    // 0x17b57c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x17b57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17b580:
    // 0x17b580: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_17b584:
    // 0x17b584: 0x40f809  jalr        $v0
label_17b588:
    if (ctx->pc == 0x17B588u) {
        ctx->pc = 0x17B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B584u;
        // 0x17b588: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B58Cu;
        goto label_17b58c;
    }
    ctx->pc = 0x17B584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B58Cu);
        ctx->pc = 0x17B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B584u;
        // 0x17b588: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B584u, 0x17B58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B58Cu;
label_17b58c:
    // 0x17b58c: 0x260308d0  addiu       $v1, $s0, 0x8D0
    ctx->pc = 0x17b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
label_17b590:
    // 0x17b590: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_17b594:
    if (ctx->pc == 0x17B594u) {
        ctx->pc = 0x17B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B590u;
        // 0x17b594: 0xc60008d4  lwc1        $f0, 0x8D4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B598u;
        goto label_17b598;
    }
    ctx->pc = 0x17B590u;
    {
        const bool branch_taken_0x17b590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b590) {
            ctx->pc = 0x17B594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B590u;
            // 0x17b594: 0xc60008d4  lwc1        $f0, 0x8D4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B5B4u;
            goto label_17b5b4;
        }
    }
    ctx->pc = 0x17B598u;
label_17b598:
    // 0x17b598: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b59c:
    // 0x17b59c: 0xe60008d0  swc1        $f0, 0x8D0($s0)
    ctx->pc = 0x17b59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2256), bits); }
label_17b5a0:
    // 0x17b5a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b5a4:
    // 0x17b5a4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x17b5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_17b5a8:
    // 0x17b5a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b5ac:
    // 0x17b5ac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x17b5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_17b5b0:
    // 0x17b5b0: 0xc60008d4  lwc1        $f0, 0x8D4($s0)
    ctx->pc = 0x17b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b5b4:
    // 0x17b5b4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17b5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17b5b8:
    // 0x17b5b8: 0x3c014083  lui         $at, 0x4083
    ctx->pc = 0x17b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16515 << 16));
label_17b5bc:
    // 0x17b5bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x17b5bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_17b5c0:
    // 0x17b5c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17b5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b5c4:
    // 0x17b5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b5c8:
    // 0x17b5c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b5c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b5cc:
    // 0x17b5cc: 0xe60008d4  swc1        $f0, 0x8D4($s0)
    ctx->pc = 0x17b5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2260), bits); }
label_17b5d0:
    // 0x17b5d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17b5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17b5d4:
    // 0x17b5d4: 0x3e00008  jr          $ra
label_17b5d8:
    if (ctx->pc == 0x17B5D8u) {
        ctx->pc = 0x17B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5D4u;
        // 0x17b5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B5DCu;
        goto label_17b5dc;
    }
    ctx->pc = 0x17B5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5D4u;
        // 0x17b5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B5DCu;
label_17b5dc:
    // 0x17b5dc: 0x0  nop
    ctx->pc = 0x17b5dcu;
    // NOP
    ctx->pc = 0x17b5e0u;
}
