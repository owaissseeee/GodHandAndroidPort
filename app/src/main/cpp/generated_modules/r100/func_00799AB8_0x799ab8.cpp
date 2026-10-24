#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_00799AB8
// Address: 0x799ab8 - 0x799c40
void func_00799AB8_0x799ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799AB8_0x799ab8");
#endif

    switch (ctx->pc) {
        case 0x799b38u: goto label_799b38;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bccu: goto label_799bcc;
        case 0x799bf4u: goto label_799bf4;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c28u: goto label_799c28;
        default: break;
    }

    ctx->pc = 0x799ab8u;

    // 0x799ab8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799abc: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x799ac0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799ac4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799ac8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799acc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x799ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799ad4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ad8: 0x8c658658  lw          $a1, -0x79A8($v1)
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799adc: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x799ae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799ae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae8: 0x3c01c087  lui         $at, 0xC087
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49287 << 16));
    // 0x799aec: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x799af0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799af4: 0x24100105  addiu       $s0, $zero, 0x105
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x799af8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x799afc: 0x3c01c03c  lui         $at, 0xC03C
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49212 << 16));
    // 0x799b00: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x799b00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x799b04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799b08: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799b0c: 0x3c01429a  lui         $at, 0x429A
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17050 << 16));
    // 0x799b10: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799b14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799b18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799b20: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x799b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x799b24: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x799b24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799b28: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x799b28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799b2c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x799b30: 0xc1e7078  jal         func_79C1E0
    ctx->pc = 0x799B30u;
    SET_GPR_U32(ctx, 31, 0x799B38u);
    ctx->pc = 0x799B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B30u;
    // 0x799b34: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C1E0u, 0x799B30u, 0x799B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B38u;
label_799b38:
    // 0x799b38: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x799b3c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x799b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x799b40: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x799b44: 0xa4700008  sh          $s0, 0x8($v1)
    ctx->pc = 0x799b44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x799b48: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x799b4c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x799b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x799b50: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x799B50u;
    {
        const bool branch_taken_0x799b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x799B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B50u;
        // 0x799b54: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b50) {
            ctx->pc = 0x799B6Cu;
            goto label_799b6c;
        }
    }
    ctx->pc = 0x799B58u;
    // 0x799b58: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x799b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x799b5c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x799b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799b60: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x799b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x799b64: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x799b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799b68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_799b6c:
    // 0x799b6c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x799b70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b74: 0x3c01c010  lui         $at, 0xC010
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49168 << 16));
    // 0x799b78: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x799b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x799b7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799b80: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799b84: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799b88: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x799b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x799b8c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x799b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x799b90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799b94: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x799b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x799b98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x799b9c: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x799ba0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799ba4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x799ba8: 0xc1e7088  jal         func_79C220
    ctx->pc = 0x799BA8u;
    SET_GPR_U32(ctx, 31, 0x799BB0u);
    ctx->pc = 0x799BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BA8u;
    // 0x799bac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C220u, 0x799BA8u, 0x799BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BB0u;
label_799bb0:
    // 0x799bb0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x799BB0u;
    {
        const bool branch_taken_0x799bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB0u;
        // 0x799bb4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb0) {
            ctx->pc = 0x799C1Cu;
            goto label_799c1c;
        }
    }
    ctx->pc = 0x799BB8u;
    // 0x799bb8: 0x94627a50  lhu         $v0, 0x7A50($v1)
    ctx->pc = 0x799bb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 31312)));
    // 0x799bbc: 0x10500018  beq         $v0, $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x799BBCu;
    {
        const bool branch_taken_0x799bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bbc) {
            ctx->pc = 0x799C20u;
            goto label_799c20;
        }
    }
    ctx->pc = 0x799BC4u;
    // 0x799bc4: 0xc1e7082  jal         func_79C208
    ctx->pc = 0x799BC4u;
    SET_GPR_U32(ctx, 31, 0x799BCCu);
    ctx->pc = 0x799BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC4u;
    // 0x799bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C208u, 0x799BC4u, 0x799BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BCCu;
label_799bcc:
    // 0x799bcc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799BCCu;
    {
        const bool branch_taken_0x799bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BCCu;
        // 0x799bd0: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bcc) {
            ctx->pc = 0x799BFCu;
            goto label_799bfc;
        }
    }
    ctx->pc = 0x799BD4u;
    // 0x799bd4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799bd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x799bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799bdc: 0x24c67b00  addiu       $a2, $a2, 0x7B00
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31488));
    // 0x799be0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799be4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799be8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799bec: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799BECu;
    SET_GPR_U32(ctx, 31, 0x799BF4u);
    ctx->pc = 0x799BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BECu;
    // 0x799bf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799BECu, 0x799BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF4u;
label_799bf4:
    // 0x799bf4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799BF4u;
    {
        const bool branch_taken_0x799bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF4u;
        // 0x799bf8: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bf4) {
            ctx->pc = 0x799C20u;
            goto label_799c20;
        }
    }
    ctx->pc = 0x799BFCu;
label_799bfc:
    // 0x799bfc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799c00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x799c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799c04: 0x24c67b00  addiu       $a2, $a2, 0x7B00
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31488));
    // 0x799c08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799c0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c10: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c14: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799C14u;
    SET_GPR_U32(ctx, 31, 0x799C1Cu);
    ctx->pc = 0x799C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C14u;
    // 0x799c18: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799C14u, 0x799C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C1Cu;
label_799c1c:
    // 0x799c1c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799c20:
    // 0x799c20: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799C20u;
    SET_GPR_U32(ctx, 31, 0x799C28u);
    ctx->pc = 0x799C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C20u;
    // 0x799c24: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C20u, 0x799C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C28u;
label_799c28:
    // 0x799c28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799c2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799c30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799c38: 0x3e00008  jr          $ra
    ctx->pc = 0x799C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C38u;
        // 0x799c3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C40u;
}
} // namespace gh_r100
