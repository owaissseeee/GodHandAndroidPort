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

// Function: func_00162B18
// Address: 0x162b18 - 0x162c98
void func_00162B18_0x162b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00162B18_0x162b18");
#endif

    ctx->pc = 0x162b18u;

    // 0x162b18: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x162b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x162b1c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x162b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b20: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x162b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x162b24: 0x90640014  lbu         $a0, 0x14($v1)
    ctx->pc = 0x162b24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x162b28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162B28u;
    {
        const bool branch_taken_0x162b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B28u;
        // 0x162b2c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b28) {
            ctx->pc = 0x162B40u;
            goto label_162b40;
        }
    }
    ctx->pc = 0x162B30u;
    // 0x162b30: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x162b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x162b34: 0x904305b6  lbu         $v1, 0x5B6($v0)
    ctx->pc = 0x162b34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1462)));
    // 0x162b38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x162B38u;
    {
        const bool branch_taken_0x162b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B38u;
        // 0x162b3c: 0x904805b7  lbu         $t0, 0x5B7($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1463)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b38) {
            ctx->pc = 0x162B4Cu;
            goto label_162b4c;
        }
    }
    ctx->pc = 0x162B40u;
label_162b40:
    // 0x162b40: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x162b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x162b44: 0x904305b0  lbu         $v1, 0x5B0($v0)
    ctx->pc = 0x162b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x162b48: 0x904805b1  lbu         $t0, 0x5B1($v0)
    ctx->pc = 0x162b48u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1457)));
label_162b4c:
    // 0x162b4c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162B4Cu;
    {
        const bool branch_taken_0x162b4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B4Cu;
        // 0x162b50: 0x81100  sll         $v0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b4c) {
            ctx->pc = 0x162B60u;
            goto label_162b60;
        }
    }
    ctx->pc = 0x162B54u;
    // 0x162b54: 0x24422013  addiu       $v0, $v0, 0x2013
    ctx->pc = 0x162b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8211));
    // 0x162b58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162B58u;
    {
        const bool branch_taken_0x162b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B58u;
        // 0x162b5c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b58) {
            ctx->pc = 0x162B64u;
            goto label_162b64;
        }
    }
    ctx->pc = 0x162B60u;
label_162b60:
    // 0x162b60: 0x240620a3  addiu       $a2, $zero, 0x20A3
    ctx->pc = 0x162b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
label_162b64:
    // 0x162b64: 0x8ce400e4  lw          $a0, 0xE4($a3)
    ctx->pc = 0x162b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 228)));
    // 0x162b68: 0x240220a3  addiu       $v0, $zero, 0x20A3
    ctx->pc = 0x162b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
    // 0x162b6c: 0x2cc320a4  sltiu       $v1, $a2, 0x20A4
    ctx->pc = 0x162b6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8356) ? 1 : 0);
    // 0x162b70: 0x2d050009  sltiu       $a1, $t0, 0x9
    ctx->pc = 0x162b70u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x162b74: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x162b74u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x162b78: 0xa4860090  sh          $a2, 0x90($a0)
    ctx->pc = 0x162b78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x162b7c: 0x8ce200e8  lw          $v0, 0xE8($a3)
    ctx->pc = 0x162b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
    // 0x162b80: 0x10a00042  beqz        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x162B80u;
    {
        const bool branch_taken_0x162b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B80u;
        // 0x162b84: 0xa4460090  sh          $a2, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b80) {
            ctx->pc = 0x162C8Cu;
            goto label_162c8c;
        }
    }
    ctx->pc = 0x162B88u;
    // 0x162b88: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x162b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x162b8c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x162b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x162b90: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x162b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
    // 0x162b94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162b98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x162b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162b9c: 0x800008  jr          $a0
    ctx->pc = 0x162B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162BA4u: goto label_162ba4;
            case 0x162BC0u: goto label_162bc0;
            case 0x162BD8u: goto label_162bd8;
            case 0x162BF0u: goto label_162bf0;
            case 0x162C08u: goto label_162c08;
            case 0x162C20u: goto label_162c20;
            case 0x162C38u: goto label_162c38;
            case 0x162C50u: goto label_162c50;
            case 0x162C68u: goto label_162c68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x162BA4u;
label_162ba4:
    // 0x162ba4: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x162ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x162ba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162bac: 0x3c014390  lui         $at, 0x4390
    ctx->pc = 0x162bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17296 << 16));
    // 0x162bb0: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x162bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x162bb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162bb8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x162BB8u;
    {
        const bool branch_taken_0x162bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BB8u;
        // 0x162bbc: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162bb8) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162BC0u;
label_162bc0:
    // 0x162bc0: 0x3c0142cc  lui         $at, 0x42CC
    ctx->pc = 0x162bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17100 << 16));
    // 0x162bc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162bc8: 0x3c014385  lui         $at, 0x4385
    ctx->pc = 0x162bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17285 << 16));
    // 0x162bcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162bd0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x162BD0u;
    {
        const bool branch_taken_0x162bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BD0u;
        // 0x162bd4: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162bd0) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162BD8u;
label_162bd8:
    // 0x162bd8: 0x3c014327  lui         $at, 0x4327
    ctx->pc = 0x162bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17191 << 16));
    // 0x162bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162be0: 0x3c014343  lui         $at, 0x4343
    ctx->pc = 0x162be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17219 << 16));
    // 0x162be4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162be8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x162BE8u;
    {
        const bool branch_taken_0x162be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BE8u;
        // 0x162bec: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162be8) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162BF0u;
label_162bf0:
    // 0x162bf0: 0x3c014306  lui         $at, 0x4306
    ctx->pc = 0x162bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17158 << 16));
    // 0x162bf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162bf8: 0x3c0142b8  lui         $at, 0x42B8
    ctx->pc = 0x162bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17080 << 16));
    // 0x162bfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162c00: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x162C00u;
    {
        const bool branch_taken_0x162c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C00u;
        // 0x162c04: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c00) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162C08u;
label_162c08:
    // 0x162c08: 0x3c01436b  lui         $at, 0x436B
    ctx->pc = 0x162c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17259 << 16));
    // 0x162c0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c10: 0x3c0142fc  lui         $at, 0x42FC
    ctx->pc = 0x162c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17148 << 16));
    // 0x162c14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162c18: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x162C18u;
    {
        const bool branch_taken_0x162c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C18u;
        // 0x162c1c: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c18) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162C20u;
label_162c20:
    // 0x162c20: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x162c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x162c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c28: 0x3c01433e  lui         $at, 0x433E
    ctx->pc = 0x162c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17214 << 16));
    // 0x162c2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162c30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x162C30u;
    {
        const bool branch_taken_0x162c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C30u;
        // 0x162c34: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c30) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162C38u;
label_162c38:
    // 0x162c38: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x162c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x162c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c40: 0x3c0142b0  lui         $at, 0x42B0
    ctx->pc = 0x162c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17072 << 16));
    // 0x162c44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162c48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x162C48u;
    {
        const bool branch_taken_0x162c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C48u;
        // 0x162c4c: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c48) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162C50u;
label_162c50:
    // 0x162c50: 0x3c0143cc  lui         $at, 0x43CC
    ctx->pc = 0x162c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17356 << 16));
    // 0x162c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c58: 0x3c0142b0  lui         $at, 0x42B0
    ctx->pc = 0x162c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17072 << 16));
    // 0x162c5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162c60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x162C60u;
    {
        const bool branch_taken_0x162c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C60u;
        // 0x162c64: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c60) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162C68u;
label_162c68:
    // 0x162c68: 0x8ce30080  lw          $v1, 0x80($a3)
    ctx->pc = 0x162c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x162c6c: 0x3c0143e3  lui         $at, 0x43E3
    ctx->pc = 0x162c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17379 << 16));
    // 0x162c70: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x162c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x162c74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c78: 0x3c01423c  lui         $at, 0x423C
    ctx->pc = 0x162c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16956 << 16));
    // 0x162c7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162c80:
    // 0x162c80: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x162c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x162c84: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x162c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x162c88: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x162c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_162c8c:
    // 0x162c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x162C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162C94u;
    // 0x162c94: 0x0  nop
    ctx->pc = 0x162c94u;
    // NOP
    ctx->pc = 0x162c98u;
}
