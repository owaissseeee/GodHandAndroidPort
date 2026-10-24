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

// Function: func_0017EF98
// Address: 0x17ef98 - 0x17f1c8
void func_0017EF98_0x17ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EF98_0x17ef98");
#endif

    switch (ctx->pc) {
        case 0x17efbcu: goto label_17efbc;
        case 0x17f0e8u: goto label_17f0e8;
        case 0x17f138u: goto label_17f138;
        case 0x17f160u: goto label_17f160;
        default: break;
    }

    ctx->pc = 0x17ef98u;

    // 0x17ef98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ef9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17efa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17efa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17efa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17efa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17efa8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x17efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x17efac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17efacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17efb0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x17efb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17efb4: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x17EFB4u;
    SET_GPR_U32(ctx, 31, 0x17EFBCu);
    ctx->pc = 0x17EFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFB4u;
    // 0x17efb8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x17EFB4u, 0x17EFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFBCu;
label_17efbc:
    // 0x17efbc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17efbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17efc0: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x17efc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x17efc4: 0x10710016  beq         $v1, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17EFC4u;
    {
        const bool branch_taken_0x17efc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x17EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFC4u;
        // 0x17efc8: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efc4) {
            ctx->pc = 0x17F020u;
            goto label_17f020;
        }
    }
    ctx->pc = 0x17EFCCu;
    // 0x17efcc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x17efccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17efd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EFD0u;
    {
        const bool branch_taken_0x17efd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17efd0) {
            ctx->pc = 0x17EFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EFD0u;
            // 0x17efd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EFE8u;
            goto label_17efe8;
        }
    }
    ctx->pc = 0x17EFD8u;
    // 0x17efd8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EFD8u;
    {
        const bool branch_taken_0x17efd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17efd8) {
            ctx->pc = 0x17EFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EFD8u;
            // 0x17efdc: 0x92020600  lbu         $v0, 0x600($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F000u;
            goto label_17f000;
        }
    }
    ctx->pc = 0x17EFE0u;
    // 0x17efe0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x17EFE0u;
    {
        const bool branch_taken_0x17efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFE0u;
        // 0x17efe4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efe0) {
            ctx->pc = 0x17F1B0u;
            goto label_17f1b0;
        }
    }
    ctx->pc = 0x17EFE8u;
label_17efe8:
    // 0x17efe8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17EFE8u;
    {
        const bool branch_taken_0x17efe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFE8u;
        // 0x17efec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efe8) {
            ctx->pc = 0x17F068u;
            goto label_17f068;
        }
    }
    ctx->pc = 0x17EFF0u;
    // 0x17eff0: 0x50620064  beql        $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x17EFF0u;
    {
        const bool branch_taken_0x17eff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17eff0) {
            ctx->pc = 0x17EFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EFF0u;
            // 0x17eff4: 0xc6000604  lwc1        $f0, 0x604($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F184u;
            goto label_17f184;
        }
    }
    ctx->pc = 0x17EFF8u;
    // 0x17eff8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x17EFF8u;
    {
        const bool branch_taken_0x17eff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFF8u;
        // 0x17effc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eff8) {
            ctx->pc = 0x17F1B0u;
            goto label_17f1b0;
        }
    }
    ctx->pc = 0x17F000u;
label_17f000:
    // 0x17f000: 0x5051006b  beql        $v0, $s1, . + 4 + (0x6B << 2)
    ctx->pc = 0x17F000u;
    {
        const bool branch_taken_0x17f000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x17f000) {
            ctx->pc = 0x17F004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F000u;
            // 0x17f004: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F1B0u;
            goto label_17f1b0;
        }
    }
    ctx->pc = 0x17F008u;
    // 0x17f008: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x17f008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x17f00c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17f00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f010: 0xa21102f5  sb          $s1, 0x2F5($s0)
    ctx->pc = 0x17f010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 17));
    // 0x17f014: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x17f014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x17f018: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x17f018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f01c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x17f01cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_17f020:
    // 0x17f020: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x17f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f024: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17f024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f028: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x17f028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x17f02c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17f02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f030: 0x0  nop
    ctx->pc = 0x17f030u;
    // NOP
    // 0x17f034: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
    ctx->pc = 0x17F034u;
    {
        const bool branch_taken_0x17f034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F034u;
        // 0x17f038: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f034) {
            ctx->pc = 0x17F1ACu;
            goto label_17f1ac;
        }
    }
    ctx->pc = 0x17F03Cu;
    // 0x17f03c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x17f03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x17f040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17f040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f048: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17f048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x17f04c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17f04cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17f050: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17f050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f054: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x17f054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x17f058: 0xe6010608  swc1        $f1, 0x608($s0)
    ctx->pc = 0x17f058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
    // 0x17f05c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x17f05cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f060: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x17F060u;
    {
        const bool branch_taken_0x17f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F060u;
        // 0x17f064: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f060) {
            ctx->pc = 0x17F1A8u;
            goto label_17f1a8;
        }
    }
    ctx->pc = 0x17F068u;
label_17f068:
    // 0x17f068: 0xc6040608  lwc1        $f4, 0x608($s0)
    ctx->pc = 0x17f068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17f06c: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x17f06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x17f070: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17f070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17f074: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17f074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f078: 0x46062082  mul.s       $f2, $f4, $f6
    ctx->pc = 0x17f078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x17f07c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x17f07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x17f080: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x17f080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x17f084: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x17f084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x17f088: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x17f088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x17f08c: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x17f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f090: 0xc6030100  lwc1        $f3, 0x100($s0)
    ctx->pc = 0x17f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17f094: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x17f094u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x17f098: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x17f098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x17f09c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x17f09cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x17f0a0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x17f0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x17f0a4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x17f0a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x17f0a8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x17f0a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x17f0ac: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x17f0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x17f0b0: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x17f0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f0b4: 0xe6030100  swc1        $f3, 0x100($s0)
    ctx->pc = 0x17f0b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x17f0b8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x17F0B8u;
    {
        const bool branch_taken_0x17f0b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0B8u;
        // 0x17f0bc: 0xe6040608  swc1        $f4, 0x608($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0b8) {
            ctx->pc = 0x17F0F8u;
            goto label_17f0f8;
        }
    }
    ctx->pc = 0x17F0C0u;
    // 0x17f0c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17f0c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17f0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f0c8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17f0cc: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x17f0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x17f0d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17f0d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f0d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f0d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17f0dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0e0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x17F0E0u;
    SET_GPR_U32(ctx, 31, 0x17F0E8u);
    ctx->pc = 0x17F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0E0u;
    // 0x17f0e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x17F0E0u, 0x17F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0E8u;
label_17f0e8:
    // 0x17f0e8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x17f0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x17f0ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17f0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f0f0: 0x0  nop
    ctx->pc = 0x17f0f0u;
    // NOP
    // 0x17f0f4: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x17f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_17f0f8:
    // 0x17f0f8: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x17f0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f0fc: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x17f0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x17f100: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17f100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17f104: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17f104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17f108: 0x0  nop
    ctx->pc = 0x17f108u;
    // NOP
    // 0x17f10c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x17f10cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f110: 0x0  nop
    ctx->pc = 0x17f110u;
    // NOP
    // 0x17f114: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x17F114u;
    {
        const bool branch_taken_0x17f114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F114u;
        // 0x17f118: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f114) {
            ctx->pc = 0x17F1ACu;
            goto label_17f1ac;
        }
    }
    ctx->pc = 0x17F11Cu;
    // 0x17f11c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x17f11cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x17f120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f12c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17f12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f130: 0xc0c194a  jal         func_306528
    ctx->pc = 0x17F130u;
    SET_GPR_U32(ctx, 31, 0x17F138u);
    ctx->pc = 0x17F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F130u;
    // 0x17f134: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x17F130u, 0x17F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F138u;
label_17f138:
    // 0x17f138: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17f138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17f13c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17f13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f140: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17f140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17f144: 0x240600e7  addiu       $a2, $zero, 0xE7
    ctx->pc = 0x17f144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x17f148: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17f148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f14c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f14cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f150: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f150u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f154: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17f154u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f158: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x17F158u;
    SET_GPR_U32(ctx, 31, 0x17F160u);
    ctx->pc = 0x17F15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F158u;
    // 0x17f15c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x17F158u, 0x17F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F160u;
label_17f160:
    // 0x17f160: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x17f160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x17f164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17f164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f168: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17f168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f16c: 0xe6140100  swc1        $f20, 0x100($s0)
    ctx->pc = 0x17f16cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x17f170: 0xa2110600  sb          $s1, 0x600($s0)
    ctx->pc = 0x17f170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 17));
    // 0x17f174: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x17f174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x17f178: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x17f178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f17c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F17Cu;
    {
        const bool branch_taken_0x17f17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F17Cu;
        // 0x17f180: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f17c) {
            ctx->pc = 0x17F1A8u;
            goto label_17f1a8;
        }
    }
    ctx->pc = 0x17F184u;
label_17f184:
    // 0x17f184: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17f184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f188: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x17f188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x17f18c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17f18cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f190: 0x0  nop
    ctx->pc = 0x17f190u;
    // NOP
    // 0x17f194: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x17F194u;
    {
        const bool branch_taken_0x17f194 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F194u;
        // 0x17f198: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f194) {
            ctx->pc = 0x17F1ACu;
            goto label_17f1ac;
        }
    }
    ctx->pc = 0x17F19Cu;
    // 0x17f19c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x17f19cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f1a0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x17f1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f1a4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x17f1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_17f1a8:
    // 0x17f1a8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x17f1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_17f1ac:
    // 0x17f1ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17f1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f1b0:
    // 0x17f1b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f1b8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x17f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x17F1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1BCu;
        // 0x17f1c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F1C4u;
    // 0x17f1c4: 0x0  nop
    ctx->pc = 0x17f1c4u;
    // NOP
    ctx->pc = 0x17f1c8u;
}
