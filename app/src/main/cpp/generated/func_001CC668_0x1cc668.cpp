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

// Function: func_001CC668
// Address: 0x1cc668 - 0x1cca08
void func_001CC668_0x1cc668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CC668_0x1cc668");
#endif

    switch (ctx->pc) {
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6d0u: goto label_1cc6d0;
        case 0x1cc8a8u: goto label_1cc8a8;
        case 0x1cc938u: goto label_1cc938;
        default: break;
    }

    ctx->pc = 0x1cc668u;

    // 0x1cc668: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cc668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cc66c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1cc66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1cc670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cc670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc674: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1cc674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1cc678: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cc678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cc67c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1cc67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1cc680: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1cc680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1cc684: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x1cc688: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1cc688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1cc68c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cc68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1cc690: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1cc690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1cc694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cc694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cc698: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CC698u;
    SET_GPR_U32(ctx, 31, 0x1CC6A0u);
    ctx->pc = 0x1CC69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC698u;
    // 0x1cc69c: 0xe7b500a8  swc1        $f21, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CC698u, 0x1CC6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6A0u;
label_1cc6a0:
    // 0x1cc6a0: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x1cc6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x1cc6a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC6A4u;
    {
        const bool branch_taken_0x1cc6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6A4u;
        // 0x1cc6a8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6a4) {
            ctx->pc = 0x1CC6C0u;
            goto label_1cc6c0;
        }
    }
    ctx->pc = 0x1CC6ACu;
    // 0x1cc6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc6b0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC6B0u;
    {
        const bool branch_taken_0x1cc6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6B0u;
        // 0x1cc6b4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6b0) {
            ctx->pc = 0x1CC6DCu;
            goto label_1cc6dc;
        }
    }
    ctx->pc = 0x1CC6B8u;
    // 0x1cc6b8: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1CC6B8u;
    {
        const bool branch_taken_0x1cc6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6B8u;
        // 0x1cc6bc: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6b8) {
            ctx->pc = 0x1CC9E0u;
            goto label_1cc9e0;
        }
    }
    ctx->pc = 0x1CC6C0u;
label_1cc6c0:
    // 0x1cc6c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6c4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cc6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cc6c8: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1CC6C8u;
    SET_GPR_U32(ctx, 31, 0x1CC6D0u);
    ctx->pc = 0x1CC6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6C8u;
    // 0x1cc6cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1CC6C8u, 0x1CC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6D0u;
label_1cc6d0:
    // 0x1cc6d0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1cc6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x1cc6d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cc6d8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1cc6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cc6dc:
    // 0x1cc6dc: 0x964202fe  lhu         $v0, 0x2FE($s2)
    ctx->pc = 0x1cc6dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x1cc6e0: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x1cc6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
    // 0x1cc6e4: 0x2c83005a  sltiu       $v1, $a0, 0x5A
    ctx->pc = 0x1cc6e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
    // 0x1cc6e8: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1CC6E8u;
    {
        const bool branch_taken_0x1cc6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6E8u;
        // 0x1cc6ec: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6e8) {
            ctx->pc = 0x1CC81Cu;
            goto label_1cc81c;
        }
    }
    ctx->pc = 0x1CC6F0u;
    // 0x1cc6f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cc6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cc6f4: 0x2442a7a0  addiu       $v0, $v0, -0x5860
    ctx->pc = 0x1cc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944672));
    // 0x1cc6f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc6fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cc6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc700: 0x800008  jr          $a0
    ctx->pc = 0x1CC700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC708u: goto label_1cc708;
            case 0x1CC81Cu: goto label_1cc81c;
            case 0x1CC88Cu: goto label_1cc88c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC700u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CC708u;
label_1cc708:
    // 0x1cc708: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1cc708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1cc70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc710: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1cc710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cc714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC714u;
    {
        const bool branch_taken_0x1cc714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC714u;
        // 0x1cc718: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc714) {
            ctx->pc = 0x1CC728u;
            goto label_1cc728;
        }
    }
    ctx->pc = 0x1CC71Cu;
    // 0x1cc71c: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1cc71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1cc720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC720u;
    {
        const bool branch_taken_0x1cc720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC720u;
        // 0x1cc724: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc720) {
            ctx->pc = 0x1CC72Cu;
            goto label_1cc72c;
        }
    }
    ctx->pc = 0x1CC728u;
label_1cc728:
    // 0x1cc728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc72c:
    // 0x1cc72c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CC72Cu;
    {
        const bool branch_taken_0x1cc72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc72c) {
            ctx->pc = 0x1CC730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC72Cu;
            // 0x1cc730: 0x924302b4  lbu         $v1, 0x2B4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC794u;
            goto label_1cc794;
        }
    }
    ctx->pc = 0x1CC734u;
    // 0x1cc734: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1cc734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1cc738: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1cc738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1cc73c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc740: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1cc740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc744: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cc744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cc748: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1cc748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1cc74c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cc74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cc750: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc754: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x1cc754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1cc758: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1cc758u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1cc75c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1cc75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1cc760: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cc760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cc764: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cc764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cc768: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cc768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cc76c: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1cc76cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1cc770: 0xe4410100  swc1        $f1, 0x100($v0)
    ctx->pc = 0x1cc770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1cc774: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1cc774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc778: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1cc778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1cc77c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cc77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cc780: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1cc780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1cc784: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc788: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1cc788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cc78c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cc790: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1cc790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1cc794:
    // 0x1cc794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cc794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc798: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1cc798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cc79c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC79Cu;
    {
        const bool branch_taken_0x1cc79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC79Cu;
        // 0x1cc7a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc79c) {
            ctx->pc = 0x1CC7B0u;
            goto label_1cc7b0;
        }
    }
    ctx->pc = 0x1CC7A4u;
    // 0x1cc7a4: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1cc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1cc7a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC7A8u;
    {
        const bool branch_taken_0x1cc7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7A8u;
        // 0x1cc7ac: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7a8) {
            ctx->pc = 0x1CC7B4u;
            goto label_1cc7b4;
        }
    }
    ctx->pc = 0x1CC7B0u;
label_1cc7b0:
    // 0x1cc7b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7b4:
    // 0x1cc7b4: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CC7B4u;
    {
        const bool branch_taken_0x1cc7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc7b4) {
            ctx->pc = 0x1CC7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC7B4u;
            // 0x1cc7b8: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC860u;
            goto label_1cc860;
        }
    }
    ctx->pc = 0x1CC7BCu;
    // 0x1cc7bc: 0x3c01bf5f  lui         $at, 0xBF5F
    ctx->pc = 0x1cc7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48991 << 16));
    // 0x1cc7c0: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1cc7c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1cc7c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc7c8: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1cc7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc7cc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cc7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cc7d0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1cc7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1cc7d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cc7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cc7d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc7dc: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x1cc7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1cc7e0: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1cc7e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1cc7e4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1cc7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1cc7e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cc7e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cc7ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cc7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cc7f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cc7f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cc7f4: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1cc7f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1cc7f8: 0xe4410100  swc1        $f1, 0x100($v0)
    ctx->pc = 0x1cc7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1cc7fc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1cc7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc800: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cc800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1cc804: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cc804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cc808: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1cc808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1cc80c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc810: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1cc810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cc814: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC814u;
    {
        const bool branch_taken_0x1cc814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC814u;
        // 0x1cc818: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc814) {
            ctx->pc = 0x1CC85Cu;
            goto label_1cc85c;
        }
    }
    ctx->pc = 0x1CC81Cu;
label_1cc81c:
    // 0x1cc81c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1cc81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1cc820: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC820u;
    {
        const bool branch_taken_0x1cc820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC820u;
        // 0x1cc824: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc820) {
            ctx->pc = 0x1CC834u;
            goto label_1cc834;
        }
    }
    ctx->pc = 0x1CC828u;
    // 0x1cc828: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1cc828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1cc82c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC82Cu;
    {
        const bool branch_taken_0x1cc82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC82Cu;
        // 0x1cc830: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc82c) {
            ctx->pc = 0x1CC838u;
            goto label_1cc838;
        }
    }
    ctx->pc = 0x1CC834u;
label_1cc834:
    // 0x1cc834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc838:
    // 0x1cc838: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC838u;
    {
        const bool branch_taken_0x1cc838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc838) {
            ctx->pc = 0x1CC83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC838u;
            // 0x1cc83c: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC860u;
            goto label_1cc860;
        }
    }
    ctx->pc = 0x1CC840u;
    // 0x1cc840: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1cc840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1cc844: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1cc844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1cc848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc84c: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1cc84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc850: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cc850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cc854: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cc854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cc858: 0xe4410100  swc1        $f1, 0x100($v0)
    ctx->pc = 0x1cc858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1cc85c:
    // 0x1cc85c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1cc85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1cc860:
    // 0x1cc860: 0xc6400630  lwc1        $f0, 0x630($s2)
    ctx->pc = 0x1cc860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc864: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cc864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc868: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1cc868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1cc86c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1cc86cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1cc870: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc874: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cc874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cc878: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cc878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cc87c: 0xc6400630  lwc1        $f0, 0x630($s2)
    ctx->pc = 0x1cc87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc880: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cc880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1cc884: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1CC884u;
    {
        const bool branch_taken_0x1cc884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC884u;
        // 0x1cc888: 0xe6400630  swc1        $f0, 0x630($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc884) {
            ctx->pc = 0x1CC990u;
            goto label_1cc990;
        }
    }
    ctx->pc = 0x1CC88Cu;
label_1cc88c:
    // 0x1cc88c: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1cc88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1cc890: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1cc890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1cc894: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1cc894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1cc898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc89c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x1cc89cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cc8a0: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1cc8a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cc8a4: 0x0  nop
    ctx->pc = 0x1cc8a4u;
    // NOP
label_1cc8a8:
    // 0x1cc8a8: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1cc8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1cc8ac: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cc8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cc8b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cc8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cc8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8b8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC8B8u;
    {
        const bool branch_taken_0x1cc8b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1CC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8B8u;
        // 0x1cc8bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8b8) {
            ctx->pc = 0x1CC8C8u;
            goto label_1cc8c8;
        }
    }
    ctx->pc = 0x1CC8C0u;
    // 0x1cc8c0: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x1cc8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cc8c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8c8:
    // 0x1cc8c8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1cc8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cc8cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC8CCu;
    {
        const bool branch_taken_0x1cc8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8CCu;
        // 0x1cc8d0: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8cc) {
            ctx->pc = 0x1CC8E4u;
            goto label_1cc8e4;
        }
    }
    ctx->pc = 0x1CC8D4u;
    // 0x1cc8d4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1cc8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1cc8d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc8dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC8DCu;
    {
        const bool branch_taken_0x1cc8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8DCu;
        // 0x1cc8e0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8dc) {
            ctx->pc = 0x1CC8E8u;
            goto label_1cc8e8;
        }
    }
    ctx->pc = 0x1CC8E4u;
label_1cc8e4:
    // 0x1cc8e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cc8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8e8:
    // 0x1cc8e8: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CC8E8u;
    {
        const bool branch_taken_0x1cc8e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8E8u;
        // 0x1cc8ec: 0x58140  sll         $s0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8e8) {
            ctx->pc = 0x1CC990u;
            goto label_1cc990;
        }
    }
    ctx->pc = 0x1CC8F0u;
    // 0x1cc8f0: 0x261006b0  addiu       $s0, $s0, 0x6B0
    ctx->pc = 0x1cc8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1712));
    // 0x1cc8f4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1cc8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1cc8f8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1cc8f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc8fc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1cc8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cc900: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1cc900u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc904: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1cc904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cc908: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cc908u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cc90c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cc90cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cc910: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1cc910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cc914: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1cc914u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1cc918: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1cc918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cc91c: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x1cc91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1cc920: 0xda240100  lqc2        $vf4, 0x100($s1)
    ctx->pc = 0x1cc920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1cc924: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1cc924u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc928: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cc928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cc92c: 0xfa240100  sqc2        $vf4, 0x100($s1)
    ctx->pc = 0x1cc92cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cc930: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x1CC930u;
    SET_GPR_U32(ctx, 31, 0x1CC938u);
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1CC930u, 0x1CC938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC938u;
label_1cc938:
    // 0x1cc938: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1cc938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1cc93c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cc93cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc940: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1cc940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cc944: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1cc944u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc948: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1cc948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cc94c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cc94cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cc950: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cc950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cc954: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1cc954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cc958: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1cc958u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc95c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1cc95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cc960: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x1cc960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1cc964: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cc964u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc968: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1cc968u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc96c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cc96cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cc970: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cc970u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cc974: 0x4615a042  mul.s       $f1, $f20, $f21
    ctx->pc = 0x1cc974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1cc978: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1cc978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc97c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cc97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc980: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1cc980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cc984: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cc984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cc988: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1CC988u;
    {
        const bool branch_taken_0x1cc988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC988u;
        // 0x1cc98c: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc988) {
            ctx->pc = 0x1CC8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc8a8;
        }
    }
    ctx->pc = 0x1CC990u;
label_1cc990:
    // 0x1cc990: 0xc640024c  lwc1        $f0, 0x24C($s2)
    ctx->pc = 0x1cc990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc994: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1cc994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1cc998: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cc998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cc99c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc9a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1cc9a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc9a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cc9a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cc9a8: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x1cc9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x1cc9ac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1cc9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1cc9b0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1cc9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc9b4: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x1cc9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x1cc9b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC9B8u;
    {
        const bool branch_taken_0x1cc9b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9B8u;
        // 0x1cc9bc: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9b8) {
            ctx->pc = 0x1CC9D8u;
            goto label_1cc9d8;
        }
    }
    ctx->pc = 0x1CC9C0u;
    // 0x1cc9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc9c4: 0xe642024c  swc1        $f2, 0x24C($s2)
    ctx->pc = 0x1cc9c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
    // 0x1cc9c8: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x1cc9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cc9cc: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1cc9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc9d0: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1cc9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc9d4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1cc9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cc9d8:
    // 0x1cc9d8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1cc9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cc9dc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1cc9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cc9e0:
    // 0x1cc9e0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1cc9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc9e4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1cc9e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cc9e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1cc9e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cc9ec: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1cc9ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc9f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cc9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc9f4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1cc9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cc9f8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1cc9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9FCu;
        // 0x1cca00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCA04u;
    // 0x1cca04: 0x0  nop
    ctx->pc = 0x1cca04u;
    // NOP
    ctx->pc = 0x1cca08u;
}
