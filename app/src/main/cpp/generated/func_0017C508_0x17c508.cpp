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

// Function: func_0017C508
// Address: 0x17c508 - 0x17c5b0
void func_0017C508_0x17c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017C508_0x17c508");
#endif

    switch (ctx->pc) {
        case 0x17c51cu: goto label_17c51c;
        case 0x17c578u: goto label_17c578;
        case 0x17c580u: goto label_17c580;
        case 0x17c590u: goto label_17c590;
        default: break;
    }

    ctx->pc = 0x17c508u;

    // 0x17c508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c50c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17c510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c514: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17C514u;
    SET_GPR_U32(ctx, 31, 0x17C51Cu);
    ctx->pc = 0x17C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C514u;
    // 0x17c518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17C514u, 0x17C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C51Cu;
label_17c51c:
    // 0x17c51c: 0x3c014087  lui         $at, 0x4087
    ctx->pc = 0x17c51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16519 << 16));
    // 0x17c520: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x17c520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x17c524: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17c524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17c528: 0x26020600  addiu       $v0, $s0, 0x600
    ctx->pc = 0x17c528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x17c52c: 0x3c014073  lui         $at, 0x4073
    ctx->pc = 0x17c52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16499 << 16));
    // 0x17c530: 0x3421f7cf  ori         $at, $at, 0xF7CF
    ctx->pc = 0x17c530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63439);
    // 0x17c534: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17c534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c538: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17c538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17c53c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17c53cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17c540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17c540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c544: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17c544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17c548: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17c548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c54c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17c54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17c550: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x17c550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17c554: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x17c554u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17c558: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C558u;
    {
        const bool branch_taken_0x17c558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x17C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C558u;
        // 0x17c55c: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c558) {
            ctx->pc = 0x17C570u;
            goto label_17c570;
        }
    }
    ctx->pc = 0x17C560u;
    // 0x17c560: 0xe6030600  swc1        $f3, 0x600($s0)
    ctx->pc = 0x17c560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x17c564: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x17c564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17c568: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17c568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c56c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17c56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17c570:
    // 0x17c570: 0xc06f680  jal         func_1BDA00
    ctx->pc = 0x17C570u;
    SET_GPR_U32(ctx, 31, 0x17C578u);
    ctx->pc = 0x17C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C570u;
    // 0x17c574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA00u, 0x17C570u, 0x17C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C578u;
label_17c578:
    // 0x17c578: 0xc06f5a6  jal         func_1BD698
    ctx->pc = 0x17C578u;
    SET_GPR_U32(ctx, 31, 0x17C580u);
    ctx->pc = 0x17C57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C578u;
    // 0x17c57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD698u, 0x17C578u, 0x17C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C580u;
label_17c580:
    // 0x17c580: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x17c580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x17c584: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17c584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c588: 0xc06f762  jal         func_1BDD88
    ctx->pc = 0x17C588u;
    SET_GPR_U32(ctx, 31, 0x17C590u);
    ctx->pc = 0x17C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C588u;
    // 0x17c58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD88u, 0x17C588u, 0x17C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C590u;
label_17c590:
    // 0x17c590: 0x8e0305a0  lw          $v1, 0x5A0($s0)
    ctx->pc = 0x17c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x17c594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c59c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x17c59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x17c5a0: 0xae0305a0  sw          $v1, 0x5A0($s0)
    ctx->pc = 0x17c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 3));
    // 0x17c5a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17c5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x17C5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5A8u;
        // 0x17c5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C5B0u;
}
