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

// Function: Pos_probeGroundBelow
// Address: 0x2db6d0 - 0x2db770
void Pos_probeGroundBelow_0x2db6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pos_probeGroundBelow_0x2db6d0");
#endif

    switch (ctx->pc) {
        case 0x2db74cu: goto label_2db74c;
        default: break;
    }

    ctx->pc = 0x2db6d0u;

    // 0x2db6d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2db6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2db6d4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2db6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2db6d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2db6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6dc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2db6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2db6e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2db6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2db6e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2db6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2db6e8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2db6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2db6ec: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2db6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2db6f0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2db6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2db6f4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2db6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db6f8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2db6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db6fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2db6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2db700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2db700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db704: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2db704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2db708: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2db708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2db70c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2db70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db710: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2db710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2db714: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2db718: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2db718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2db71c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2db71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2db720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db724: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2db724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2db728: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2db728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db72c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2db72cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2db730: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2db730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2db734: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x2db734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x2db738: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2db738u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db73c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2db73cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db740: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2db740u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db744: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2DB744u;
    SET_GPR_U32(ctx, 31, 0x2DB74Cu);
    ctx->pc = 0x2DB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB744u;
    // 0x2db748: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2DB744u, 0x2DB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB74Cu;
label_2db74c:
    // 0x2db74c: 0x10500002  beq         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB74Cu;
    {
        const bool branch_taken_0x2db74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2DB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB74Cu;
        // 0x2db750: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db74c) {
            ctx->pc = 0x2DB758u;
            goto label_2db758;
        }
    }
    ctx->pc = 0x2DB754u;
    // 0x2db754: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2db754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db758:
    // 0x2db758: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2db758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2db75c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2db75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2db760: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2db760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2db764: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB764u;
        // 0x2db768: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB76Cu;
    // 0x2db76c: 0x0  nop
    ctx->pc = 0x2db76cu;
    // NOP
    ctx->pc = 0x2db770u;
}
