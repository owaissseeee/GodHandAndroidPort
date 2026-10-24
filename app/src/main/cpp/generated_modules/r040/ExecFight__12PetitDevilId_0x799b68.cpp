#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: ExecFight__12PetitDevilId
// Address: 0x799b68 - 0x799ec8
void ExecFight__12PetitDevilId_0x799b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecFight__12PetitDevilId_0x799b68");
#endif

    switch (ctx->pc) {
        case 0x799c64u: goto label_799c64;
        case 0x799c74u: goto label_799c74;
        case 0x799cccu: goto label_799ccc;
        case 0x799cdcu: goto label_799cdc;
        case 0x799d6cu: goto label_799d6c;
        case 0x799da8u: goto label_799da8;
        case 0x799db8u: goto label_799db8;
        case 0x799dc8u: goto label_799dc8;
        case 0x799de0u: goto label_799de0;
        case 0x799df8u: goto label_799df8;
        case 0x799e20u: goto label_799e20;
        case 0x799e54u: goto label_799e54;
        case 0x799e64u: goto label_799e64;
        case 0x799e74u: goto label_799e74;
        case 0x799e84u: goto label_799e84;
        default: break;
    }

    ctx->pc = 0x799b68u;

    // 0x799b68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799b6c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799b70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799b74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x799b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799b7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799b84: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x799b84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x799b88: 0x9e620000  lwu         $v0, 0x0($s3)
    ctx->pc = 0x799b88u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x799b8c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x799b8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x799b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799b94: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x799B94u;
    {
        const bool branch_taken_0x799b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B94u;
        // 0x799b98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b94) {
            ctx->pc = 0x799EA4u;
            goto label_799ea4;
        }
    }
    ctx->pc = 0x799B9Cu;
    // 0x799b9c: 0x8e630ec0  lw          $v1, 0xEC0($s3)
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3776)));
    // 0x799ba0: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x799BA0u;
    {
        const bool branch_taken_0x799ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA0u;
        // 0x799ba4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ba0) {
            ctx->pc = 0x799CE4u;
            goto label_799ce4;
        }
    }
    ctx->pc = 0x799BA8u;
    // 0x799ba8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799BA8u;
    {
        const bool branch_taken_0x799ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ba8) {
            ctx->pc = 0x799BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BA8u;
            // 0x799bac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BC0u;
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799BB0u;
    // 0x799bb0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x799BB0u;
    {
        const bool branch_taken_0x799bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB0u;
        // 0x799bb4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb0) {
            ctx->pc = 0x799BD8u;
            goto label_799bd8;
        }
    }
    ctx->pc = 0x799BB8u;
    // 0x799bb8: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x799BB8u;
    {
        const bool branch_taken_0x799bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB8u;
        // 0x799bbc: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb8) {
            ctx->pc = 0x799EACu;
            goto label_799eac;
        }
    }
    ctx->pc = 0x799BC0u;
label_799bc0:
    // 0x799bc0: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x799BC0u;
    {
        const bool branch_taken_0x799bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC0u;
        // 0x799bc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc0) {
            ctx->pc = 0x799D7Cu;
            goto label_799d7c;
        }
    }
    ctx->pc = 0x799BC8u;
    // 0x799bc8: 0x1062009b  beq         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x799BC8u;
    {
        const bool branch_taken_0x799bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC8u;
        // 0x799bcc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc8) {
            ctx->pc = 0x799E38u;
            goto label_799e38;
        }
    }
    ctx->pc = 0x799BD0u;
    // 0x799bd0: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799EACu;
            goto label_799eac;
        }
    }
    ctx->pc = 0x799BD8u;
label_799bd8:
    // 0x799bd8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x799bdc: 0x2410ff00  addiu       $s0, $zero, -0x100
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x799be0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799be4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x799be8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x799be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x799bec: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x799becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x799bf0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x799bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x799bf4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x799bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x799bf8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799bfc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x799bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x799c00: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x799c04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799c08: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x799c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x799c0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x799c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x799c10: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x799c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x799c14: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x799c18: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x799c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x799c1c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799c20: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x799c24: 0xae640ec4  sw          $a0, 0xEC4($s3)
    ctx->pc = 0x799c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3780), GPR_U32(ctx, 4));
    // 0x799c28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x799c2c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799c30: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x799c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x799c34: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799c38: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x799c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x799c3c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x799c40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799c44: 0x96670ec4  lhu         $a3, 0xEC4($s3)
    ctx->pc = 0x799c44u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 3780)));
    // 0x799c48: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x799c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x799c4c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x799c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x799c50: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x799c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x799c54: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x799c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c5c: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x799C5Cu;
    SET_GPR_U32(ctx, 31, 0x799C64u);
    ctx->pc = 0x799C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C5Cu;
    // 0x799c60: 0x266407f8  addiu       $a0, $s3, 0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x799C5Cu, 0x799C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C64u;
label_799c64:
    // 0x799c64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c6c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799C6Cu;
    SET_GPR_U32(ctx, 31, 0x799C74u);
    ctx->pc = 0x799C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C6Cu;
    // 0x799c70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799C6Cu, 0x799C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C74u;
label_799c74:
    // 0x799c74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799c78: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x799c7c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x799c80: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x799c84: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x799c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x799c88: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x799c8c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x799c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x799c90: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x799c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x799c94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x799c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x799c98: 0x346300d0  ori         $v1, $v1, 0xD0
    ctx->pc = 0x799c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)208);
    // 0x799c9c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x799c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x799ca0: 0x26640874  addiu       $a0, $s3, 0x874
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2164));
    // 0x799ca4: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x799ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x799ca8: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x799ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x799cac: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x799cacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x799cb0: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x799cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x799cb4: 0xa0c70002  sb          $a3, 0x2($a2)
    ctx->pc = 0x799cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x799cb8: 0xa0c70001  sb          $a3, 0x1($a2)
    ctx->pc = 0x799cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x799cbc: 0x96670ec4  lhu         $a3, 0xEC4($s3)
    ctx->pc = 0x799cbcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 3780)));
    // 0x799cc0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x799cc4: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x799CC4u;
    SET_GPR_U32(ctx, 31, 0x799CCCu);
    ctx->pc = 0x799CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC4u;
    // 0x799cc8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x799CC4u, 0x799CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CCCu;
label_799ccc:
    // 0x799ccc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799cd4: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799CD4u;
    SET_GPR_U32(ctx, 31, 0x799CDCu);
    ctx->pc = 0x799CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD4u;
    // 0x799cd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799CD4u, 0x799CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CDCu;
label_799cdc:
    // 0x799cdc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x799CDCu;
    {
        const bool branch_taken_0x799cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CDCu;
        // 0x799ce0: 0x8e620ec0  lw          $v0, 0xEC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cdc) {
            ctx->pc = 0x799D70u;
            goto label_799d70;
        }
    }
    ctx->pc = 0x799CE4u;
label_799ce4:
    // 0x799ce4: 0x8e620ec4  lw          $v0, 0xEC4($s3)
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3780)));
    // 0x799ce8: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x799CE8u;
    {
        const bool branch_taken_0x799ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE8u;
        // 0x799cec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ce8) {
            ctx->pc = 0x799EA0u;
            goto label_799ea0;
        }
    }
    ctx->pc = 0x799CF0u;
    // 0x799cf0: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x799cf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x799cf8: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x799cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x799cfc: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x799cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x799d00: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x799d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x799d04: 0x34c60050  ori         $a2, $a2, 0x50
    ctx->pc = 0x799d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)80);
    // 0x799d08: 0x34a500d0  ori         $a1, $a1, 0xD0
    ctx->pc = 0x799d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)208);
    // 0x799d0c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x799d0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x799d10: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x799d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x799d14: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x799d18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x799d1c: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x799d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x799d20: 0x34c65000  ori         $a2, $a2, 0x5000
    ctx->pc = 0x799d20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20480);
    // 0x799d24: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x799d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x799d28: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x799d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x799d2c: 0x3c0400d0  lui         $a0, 0xD0
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)208 << 16));
    // 0x799d30: 0x3c030050  lui         $v1, 0x50
    ctx->pc = 0x799d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)80 << 16));
    // 0x799d34: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x799d38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799d3c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x799d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x799d40: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x799d40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x799d44: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x799d48: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x799d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x799d4c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x799d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x799d50: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799d54: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x799d54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x799d58: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x799d58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x799d5c: 0xae630ec4  sw          $v1, 0xEC4($s3)
    ctx->pc = 0x799d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3780), GPR_U32(ctx, 3));
    // 0x799d60: 0x26640874  addiu       $a0, $s3, 0x874
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2164));
    // 0x799d64: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x799D64u;
    SET_GPR_U32(ctx, 31, 0x799D6Cu);
    ctx->pc = 0x799D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D64u;
    // 0x799d68: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x799D64u, 0x799D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D6Cu;
label_799d6c:
    // 0x799d6c: 0x8e620ec0  lw          $v0, 0xEC0($s3)
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3776)));
label_799d70:
    // 0x799d70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799d74: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x799D74u;
    {
        const bool branch_taken_0x799d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D74u;
        // 0x799d78: 0xae620ec0  sw          $v0, 0xEC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d74) {
            ctx->pc = 0x799EA4u;
            goto label_799ea4;
        }
    }
    ctx->pc = 0x799D7Cu;
label_799d7c:
    // 0x799d7c: 0x8e620ec4  lw          $v0, 0xEC4($s3)
    ctx->pc = 0x799d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3780)));
    // 0x799d80: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x799D80u;
    {
        const bool branch_taken_0x799d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D80u;
        // 0x799d84: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d80) {
            ctx->pc = 0x799EA0u;
            goto label_799ea0;
        }
    }
    ctx->pc = 0x799D88u;
    // 0x799d88: 0x3c1000ff  lui         $s0, 0xFF
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)255 << 16));
    // 0x799d8c: 0x267207f8  addiu       $s2, $s3, 0x7F8
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 2040));
    // 0x799d90: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x799d90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x799d94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d98: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799d9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799da0: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x799DA0u;
    SET_GPR_U32(ctx, 31, 0x799DA8u);
    ctx->pc = 0x799DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DA0u;
    // 0x799da4: 0x26710874  addiu       $s1, $s3, 0x874 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x799DA0u, 0x799DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DA8u;
label_799da8:
    // 0x799da8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799dac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799db0: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x799DB0u;
    SET_GPR_U32(ctx, 31, 0x799DB8u);
    ctx->pc = 0x799DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB0u;
    // 0x799db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x799DB0u, 0x799DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB8u;
label_799db8:
    // 0x799db8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dc0: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x799DC0u;
    SET_GPR_U32(ctx, 31, 0x799DC8u);
    ctx->pc = 0x799DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC0u;
    // 0x799dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x799DC0u, 0x799DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC8u;
label_799dc8:
    // 0x799dc8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x799dcc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799dd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799dd8: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x799DD8u;
    SET_GPR_U32(ctx, 31, 0x799DE0u);
    ctx->pc = 0x799DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD8u;
    // 0x799ddc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x799DD8u, 0x799DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE0u;
label_799de0:
    // 0x799de0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799de4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799decu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799df0: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x799DF0u;
    SET_GPR_U32(ctx, 31, 0x799DF8u);
    ctx->pc = 0x799DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF0u;
    // 0x799df4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x799DF0u, 0x799DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DF8u;
label_799df8:
    // 0x799df8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x799df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x799dfc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799e00: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x799e04: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799e08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799e0c: 0x24060105  addiu       $a2, $zero, 0x105
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x799e10: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x799e14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799e14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e18: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x799E18u;
    SET_GPR_U32(ctx, 31, 0x799E20u);
    ctx->pc = 0x799E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E18u;
    // 0x799e1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x799E18u, 0x799E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E20u;
label_799e20:
    // 0x799e20: 0x8e630ec0  lw          $v1, 0xEC0($s3)
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3776)));
    // 0x799e24: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799e28: 0xae620ec4  sw          $v0, 0xEC4($s3)
    ctx->pc = 0x799e28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3780), GPR_U32(ctx, 2));
    // 0x799e2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799e30: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x799E30u;
    {
        const bool branch_taken_0x799e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E30u;
        // 0x799e34: 0xae630ec0  sw          $v1, 0xEC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e30) {
            ctx->pc = 0x799EA4u;
            goto label_799ea4;
        }
    }
    ctx->pc = 0x799E38u;
label_799e38:
    // 0x799e38: 0x8e620ec4  lw          $v0, 0xEC4($s3)
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3780)));
    // 0x799e3c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x799E3Cu;
    {
        const bool branch_taken_0x799e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E3Cu;
        // 0x799e40: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e3c) {
            ctx->pc = 0x799EA0u;
            goto label_799ea0;
        }
    }
    ctx->pc = 0x799E44u;
    // 0x799e44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799e4c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799E4Cu;
    SET_GPR_U32(ctx, 31, 0x799E54u);
    ctx->pc = 0x799E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E4Cu;
    // 0x799e50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799E4Cu, 0x799E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E54u;
label_799e54:
    // 0x799e54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799e5c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799E5Cu;
    SET_GPR_U32(ctx, 31, 0x799E64u);
    ctx->pc = 0x799E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E5Cu;
    // 0x799e60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799E5Cu, 0x799E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e6c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799E6Cu;
    SET_GPR_U32(ctx, 31, 0x799E74u);
    ctx->pc = 0x799E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E6Cu;
    // 0x799e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799E6Cu, 0x799E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E74u;
label_799e74:
    // 0x799e74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e7c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799E7Cu;
    SET_GPR_U32(ctx, 31, 0x799E84u);
    ctx->pc = 0x799E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E7Cu;
    // 0x799e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799E7Cu, 0x799E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E84u;
label_799e84:
    // 0x799e84: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x799e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x799e88: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x799e8c: 0xae600ec0  sw          $zero, 0xEC0($s3)
    ctx->pc = 0x799e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3776), GPR_U32(ctx, 0));
    // 0x799e90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799e94: 0xae600ec4  sw          $zero, 0xEC4($s3)
    ctx->pc = 0x799e94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3780), GPR_U32(ctx, 0));
    // 0x799e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799E98u;
    {
        const bool branch_taken_0x799e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E98u;
        // 0x799e9c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e98) {
            ctx->pc = 0x799EA4u;
            goto label_799ea4;
        }
    }
    ctx->pc = 0x799EA0u;
label_799ea0:
    // 0x799ea0: 0xae620ec4  sw          $v0, 0xEC4($s3)
    ctx->pc = 0x799ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3780), GPR_U32(ctx, 2));
label_799ea4:
    // 0x799ea4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799ea8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799eac:
    // 0x799eac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799eb0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799eb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799eb8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x799eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x799EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EBCu;
        // 0x799ec0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799EC4u;
    // 0x799ec4: 0x0  nop
    ctx->pc = 0x799ec4u;
    // NOP
    ctx->pc = 0x799ec8u;
}
} // namespace gh_r040
