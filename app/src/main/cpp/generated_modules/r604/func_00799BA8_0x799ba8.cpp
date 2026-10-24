#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_00799BA8
// Address: 0x799ba8 - 0x799da0
void func_00799BA8_0x799ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799BA8_0x799ba8");
#endif

    switch (ctx->pc) {
        case 0x799bf0u: goto label_799bf0;
        case 0x799c00u: goto label_799c00;
        case 0x799c10u: goto label_799c10;
        case 0x799c38u: goto label_799c38;
        case 0x799c44u: goto label_799c44;
        case 0x799c6cu: goto label_799c6c;
        case 0x799cccu: goto label_799ccc;
        case 0x799cd8u: goto label_799cd8;
        case 0x799cf8u: goto label_799cf8;
        case 0x799d00u: goto label_799d00;
        case 0x799d0cu: goto label_799d0c;
        case 0x799d18u: goto label_799d18;
        case 0x799d3cu: goto label_799d3c;
        case 0x799d54u: goto label_799d54;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d64u: goto label_799d64;
        case 0x799d70u: goto label_799d70;
        default: break;
    }

    ctx->pc = 0x799ba8u;

    // 0x799ba8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x799bac: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x799bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x799bb0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x799bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x799bb4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799bb8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x799bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x799bbc: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x799bc0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x799bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x799bc4: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799bc8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x799bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x799bcc: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x799bd0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x799bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x799bd4: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x799bd8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x799bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x799bdc: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799be0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x799be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x799be4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799BE4u;
    {
        const bool branch_taken_0x799be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE4u;
        // 0x799be8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799be4) {
            ctx->pc = 0x799C00u;
            goto label_799c00;
        }
    }
    ctx->pc = 0x799BECu;
    // 0x799bec: 0x0  nop
    ctx->pc = 0x799becu;
    // NOP
label_799bf0:
    // 0x799bf0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bf8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799BF8u;
    SET_GPR_U32(ctx, 31, 0x799C00u);
    ctx->pc = 0x799BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF8u;
    // 0x799bfc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799BF8u, 0x799C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C00u;
label_799c00:
    // 0x799c00: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799c04: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799c08: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799C08u;
    SET_GPR_U32(ctx, 31, 0x799C10u);
    ctx->pc = 0x799C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C08u;
    // 0x799c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799C08u, 0x799C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C10u;
label_799c10:
    // 0x799c10: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799C10u;
    {
        const bool branch_taken_0x799c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C10u;
        // 0x799c14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c10) {
            ctx->pc = 0x799BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bf0;
        }
    }
    ctx->pc = 0x799C18u;
    // 0x799c18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799c20: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799c20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799c24: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x799c24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x799c28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c2c: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x799c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x799c30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c34: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799c38:
    // 0x799c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c3c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799C3Cu;
    SET_GPR_U32(ctx, 31, 0x799C44u);
    ctx->pc = 0x799C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C3Cu;
    // 0x799c40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799C3Cu, 0x799C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C44u;
label_799c44:
    // 0x799c44: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x799c48: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799c4c: 0x2e440003  sltiu       $a0, $s2, 0x3
    ctx->pc = 0x799c4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799c50: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799C50u;
    {
        const bool branch_taken_0x799c50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C50u;
        // 0x799c54: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c50) {
            ctx->pc = 0x799C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c38;
        }
    }
    ctx->pc = 0x799C58u;
    // 0x799c58: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x799c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x799c5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C5Cu;
    {
        const bool branch_taken_0x799c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C5Cu;
        // 0x799c60: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c5c) {
            ctx->pc = 0x799C6Cu;
            goto label_799c6c;
        }
    }
    ctx->pc = 0x799C64u;
    // 0x799c64: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799C64u;
    SET_GPR_U32(ctx, 31, 0x799C6Cu);
    ctx->pc = 0x799C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C64u;
    // 0x799c68: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C64u, 0x799C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C6Cu;
label_799c6c:
    // 0x799c6c: 0x3c0141cb  lui         $at, 0x41CB
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16843 << 16));
    // 0x799c70: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x799c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x799c74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799c78: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799c7c: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x799c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x799c80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799c84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x799c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799c88: 0x3c01c17b  lui         $at, 0xC17B
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49531 << 16));
    // 0x799c8c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x799c90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799c94: 0x3c01c2d1  lui         $at, 0xC2D1
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49873 << 16));
    // 0x799c98: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x799c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x799c9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799ca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799ca8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799cac: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799cacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799cb0: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x799cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x799cb4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x799cb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799cb8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799cbc: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x799cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x799cc0: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x799cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x799cc4: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799CC4u;
    SET_GPR_U32(ctx, 31, 0x799CCCu);
    ctx->pc = 0x799CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC4u;
    // 0x799cc8: 0xe681000c  swc1        $f1, 0xC($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799CC4u, 0x799CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CCCu;
label_799ccc:
    // 0x799ccc: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799cd0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799CD0u;
    SET_GPR_U32(ctx, 31, 0x799CD8u);
    ctx->pc = 0x799CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD0u;
    // 0x799cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799CD0u, 0x799CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CD8u;
label_799cd8:
    // 0x799cd8: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x799cdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ce0: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x799ce4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799ce8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799cec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cf0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799CF0u;
    SET_GPR_U32(ctx, 31, 0x799CF8u);
    ctx->pc = 0x799CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CF0u;
    // 0x799cf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799CF0u, 0x799CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CF8u;
label_799cf8:
    // 0x799cf8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cfc: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x799cfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_799d00:
    // 0x799d00: 0x26a46ab0  addiu       $a0, $s5, 0x6AB0
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 27312));
    // 0x799d04: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799D04u;
    SET_GPR_U32(ctx, 31, 0x799D0Cu);
    ctx->pc = 0x799D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D04u;
    // 0x799d08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799D04u, 0x799D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D0Cu;
label_799d0c:
    // 0x799d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d10: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799D10u;
    SET_GPR_U32(ctx, 31, 0x799D18u);
    ctx->pc = 0x799D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D10u;
    // 0x799d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799D10u, 0x799D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D18u;
label_799d18:
    // 0x799d18: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799d1c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799d20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x799d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d34: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799D34u;
    SET_GPR_U32(ctx, 31, 0x799D3Cu);
    ctx->pc = 0x799D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D34u;
    // 0x799d38: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799D34u, 0x799D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D3Cu;
label_799d3c:
    // 0x799d3c: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x799d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799d40: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x799D40u;
    {
        const bool branch_taken_0x799d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799d40) {
            ctx->pc = 0x799D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D40u;
            // 0x799d44: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d00;
        }
    }
    ctx->pc = 0x799D48u;
    // 0x799d48: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799d4c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799D4Cu;
    SET_GPR_U32(ctx, 31, 0x799D54u);
    ctx->pc = 0x799D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D4Cu;
    // 0x799d50: 0x26e5b480  addiu       $a1, $s7, -0x4B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799D4Cu, 0x799D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D54u;
label_799d54:
    // 0x799d54: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799D54u;
    SET_GPR_U32(ctx, 31, 0x799D5Cu);
    ctx->pc = 0x799D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D54u;
    // 0x799d58: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799D54u, 0x799D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D5Cu;
label_799d5c:
    // 0x799d5c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799D5Cu;
    SET_GPR_U32(ctx, 31, 0x799D64u);
    ctx->pc = 0x799D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D5Cu;
    // 0x799d60: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799D5Cu, 0x799D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D64u;
label_799d64:
    // 0x799d64: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799d68: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799D68u;
    SET_GPR_U32(ctx, 31, 0x799D70u);
    ctx->pc = 0x799D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D68u;
    // 0x799d6c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799D68u, 0x799D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D70u;
label_799d70:
    // 0x799d70: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799d74: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799d78: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x799d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799d7c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799d80: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799d80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799d84: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799d84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799d88: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x799d88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799d8c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x799d8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799d90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d94: 0x3e00008  jr          $ra
    ctx->pc = 0x799D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D94u;
        // 0x799d98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D9Cu;
    // 0x799d9c: 0x0  nop
    ctx->pc = 0x799d9cu;
    // NOP
    ctx->pc = 0x799da0u;
}
} // namespace gh_r604
