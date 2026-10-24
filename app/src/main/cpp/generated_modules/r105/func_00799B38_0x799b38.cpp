#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: func_00799B38
// Address: 0x799b38 - 0x79a090
void func_00799B38_0x799b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799B38_0x799b38");
#endif

    switch (ctx->pc) {
        case 0x799b98u: goto label_799b98;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be8u: goto label_799be8;
        case 0x799bf8u: goto label_799bf8;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c60u: goto label_799c60;
        case 0x799c74u: goto label_799c74;
        case 0x799c90u: goto label_799c90;
        case 0x799c9cu: goto label_799c9c;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cb4u: goto label_799cb4;
        case 0x799cc0u: goto label_799cc0;
        case 0x799cccu: goto label_799ccc;
        case 0x799cd8u: goto label_799cd8;
        case 0x799ce4u: goto label_799ce4;
        case 0x799d0cu: goto label_799d0c;
        case 0x799d3cu: goto label_799d3c;
        case 0x799d64u: goto label_799d64;
        case 0x799db0u: goto label_799db0;
        case 0x799de0u: goto label_799de0;
        case 0x799e00u: goto label_799e00;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e34u: goto label_799e34;
        case 0x799e64u: goto label_799e64;
        case 0x799e8cu: goto label_799e8c;
        case 0x799ec4u: goto label_799ec4;
        case 0x799ee8u: goto label_799ee8;
        case 0x799f00u: goto label_799f00;
        case 0x799f14u: goto label_799f14;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f34u: goto label_799f34;
        case 0x799f40u: goto label_799f40;
        case 0x799f48u: goto label_799f48;
        case 0x799f50u: goto label_799f50;
        case 0x799f68u: goto label_799f68;
        case 0x799f74u: goto label_799f74;
        case 0x799f80u: goto label_799f80;
        case 0x799f8cu: goto label_799f8c;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fc8u: goto label_799fc8;
        case 0x799ff8u: goto label_799ff8;
        case 0x79a030u: goto label_79a030;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a048u: goto label_79a048;
        case 0x79a058u: goto label_79a058;
        default: break;
    }

    ctx->pc = 0x799b38u;

    // 0x799b38: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x799b3c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799b40: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x799b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x799b44: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x799b48: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x799b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x799b4c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x799b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x799b50: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x799b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x799b54: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x799b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x799b58: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x799b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x799b5c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x799b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x799b60: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x799b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x799b64: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x799b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x799b68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x799b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x799b6c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x799b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x799b70: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799b74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799b78: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799b7c: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x799B7Cu;
    {
        const bool branch_taken_0x799b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B7Cu;
        // 0x799b80: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b7c) {
            ctx->pc = 0x799F94u;
            goto label_799f94;
        }
    }
    ctx->pc = 0x799B84u;
    // 0x799b84: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b8c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799b90: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B90u;
    SET_GPR_U32(ctx, 31, 0x799B98u);
    ctx->pc = 0x799B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B90u;
    // 0x799b94: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B90u, 0x799B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B98u;
label_799b98:
    // 0x799b98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799b9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799ba0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799ba4: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799ba8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799bac: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x799bb0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x799bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799bb4: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799bb8: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x799bbc: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
    // 0x799bc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799BC0u;
    {
        const bool branch_taken_0x799bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC0u;
        // 0x799bc4: 0x27b50040  addiu       $s5, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc0) {
            ctx->pc = 0x799BDCu;
            goto label_799bdc;
        }
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_799bcc:
    // 0x799bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bd0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x799bd4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799BD4u;
    SET_GPR_U32(ctx, 31, 0x799BDCu);
    ctx->pc = 0x799BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD4u;
    // 0x799bd8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799BD4u, 0x799BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BDCu;
label_799bdc:
    // 0x799bdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799be0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799BE0u;
    SET_GPR_U32(ctx, 31, 0x799BE8u);
    ctx->pc = 0x799BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BE0u;
    // 0x799be4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799BE0u, 0x799BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE8u;
label_799be8:
    // 0x799be8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bec: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x799becu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x799bf0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799BF0u;
    SET_GPR_U32(ctx, 31, 0x799BF8u);
    ctx->pc = 0x799BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF0u;
    // 0x799bf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799BF0u, 0x799BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF8u;
label_799bf8:
    // 0x799bf8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x799bfc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x799bfcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x799c00: 0x2e100002  sltiu       $s0, $s0, 0x2
    ctx->pc = 0x799c00u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x799c04: 0x1200fff0  beqz        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x799C04u;
    {
        const bool branch_taken_0x799c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c04) {
            ctx->pc = 0x799BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799C0Cu;
    // 0x799c0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799c10: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x799c14: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799C14u;
    SET_GPR_U32(ctx, 31, 0x799C1Cu);
    ctx->pc = 0x799C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C14u;
    // 0x799c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799C14u, 0x799C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C1Cu;
label_799c1c:
    // 0x799c1c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x799C1Cu;
    {
        const bool branch_taken_0x799c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C1Cu;
        // 0x799c20: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c1c) {
            ctx->pc = 0x799BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bcc;
        }
    }
    ctx->pc = 0x799C24u;
    // 0x799c24: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799C24u;
    SET_GPR_U32(ctx, 31, 0x799C2Cu);
    ctx->pc = 0x799C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C24u;
    // 0x799c28: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799C24u, 0x799C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C2Cu;
label_799c2c:
    // 0x799c2c: 0x1451ffe7  bne         $v0, $s1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x799C2Cu;
    {
        const bool branch_taken_0x799c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x799C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C2Cu;
        // 0x799c30: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c2c) {
            ctx->pc = 0x799BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bcc;
        }
    }
    ctx->pc = 0x799C34u;
    // 0x799c34: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c3c: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799c40: 0x26f06ab0  addiu       $s0, $s7, 0x6AB0
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 27312));
    // 0x799c44: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799c48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799c4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799c50: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799c54: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799c58: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799C58u;
    SET_GPR_U32(ctx, 31, 0x799C60u);
    ctx->pc = 0x799C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C58u;
    // 0x799c5c: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799C58u, 0x799C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C60u;
label_799c60:
    // 0x799c60: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799c64: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799c68: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799c6c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799C6Cu;
    SET_GPR_U32(ctx, 31, 0x799C74u);
    ctx->pc = 0x799C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C6Cu;
    // 0x799c70: 0x2445a838  addiu       $a1, $v0, -0x57C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799C6Cu, 0x799C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C74u;
label_799c74:
    // 0x799c74: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799c78: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799c7c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x799c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x799c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c84: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x799c84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x799c88: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799C88u;
    SET_GPR_U32(ctx, 31, 0x799C90u);
    ctx->pc = 0x799C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C88u;
    // 0x799c8c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799C88u, 0x799C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C90u;
label_799c90:
    // 0x799c90: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x799c90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799c94: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799C94u;
    SET_GPR_U32(ctx, 31, 0x799C9Cu);
    ctx->pc = 0x799C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C94u;
    // 0x799c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799C94u, 0x799C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C9Cu;
label_799c9c:
    // 0x799c9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ca0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799CA0u;
    SET_GPR_U32(ctx, 31, 0x799CA8u);
    ctx->pc = 0x799CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA0u;
    // 0x799ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799CA0u, 0x799CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA8u;
label_799ca8:
    // 0x799ca8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cac: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799CACu;
    SET_GPR_U32(ctx, 31, 0x799CB4u);
    ctx->pc = 0x799CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CACu;
    // 0x799cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799CACu, 0x799CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB4u;
label_799cb4:
    // 0x799cb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cb8: 0xc0a588c  jal         func_296230
    ctx->pc = 0x799CB8u;
    SET_GPR_U32(ctx, 31, 0x799CC0u);
    ctx->pc = 0x799CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CB8u;
    // 0x799cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x799CB8u, 0x799CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CC0u;
label_799cc0:
    // 0x799cc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cc4: 0xc0a588c  jal         func_296230
    ctx->pc = 0x799CC4u;
    SET_GPR_U32(ctx, 31, 0x799CCCu);
    ctx->pc = 0x799CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC4u;
    // 0x799cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x799CC4u, 0x799CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CCCu;
label_799ccc:
    // 0x799ccc: 0x8ec4a900  lw          $a0, -0x5700($s6)
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945024)));
    // 0x799cd0: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x799CD0u;
    SET_GPR_U32(ctx, 31, 0x799CD8u);
    ctx->pc = 0x799CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD0u;
    // 0x799cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x799CD0u, 0x799CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CD8u;
label_799cd8:
    // 0x799cd8: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799cd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799cdc: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799CDCu;
    SET_GPR_U32(ctx, 31, 0x799CE4u);
    ctx->pc = 0x799CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CDCu;
    // 0x799ce0: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799CDCu, 0x799CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE4u;
label_799ce4:
    // 0x799ce4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ce8: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799CE8u;
    {
        const bool branch_taken_0x799ce8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE8u;
        // 0x799cec: 0x8ec6a900  lw          $a2, -0x5700($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ce8) {
            ctx->pc = 0x799D30u;
            goto label_799d30;
        }
    }
    ctx->pc = 0x799CF0u;
    // 0x799cf0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x799cf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799CF4u;
    {
        const bool branch_taken_0x799cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF4u;
        // 0x799cf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cf4) {
            ctx->pc = 0x799D08u;
            goto label_799d08;
        }
    }
    ctx->pc = 0x799CFCu;
    // 0x799cfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x799CFCu;
    {
        const bool branch_taken_0x799cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CFCu;
        // 0x799d00: 0xacc7000c  sw          $a3, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cfc) {
            ctx->pc = 0x799D30u;
            goto label_799d30;
        }
    }
    ctx->pc = 0x799D04u;
    // 0x799d04: 0x0  nop
    ctx->pc = 0x799d04u;
    // NOP
label_799d08:
    // 0x799d08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_799d0c:
    // 0x799d0c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x799d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799d10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799D10u;
    {
        const bool branch_taken_0x799d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D10u;
        // 0x799d14: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d10) {
            ctx->pc = 0x799D30u;
            goto label_799d30;
        }
    }
    ctx->pc = 0x799D18u;
    // 0x799d18: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x799d1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799d20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799d24: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799D24u;
    {
        const bool branch_taken_0x799d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D24u;
        // 0x799d28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d24) {
            ctx->pc = 0x799D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d0c;
        }
    }
    ctx->pc = 0x799D2Cu;
    // 0x799d2c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x799d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_799d30:
    // 0x799d30: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x799d30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d34: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799D34u;
    SET_GPR_U32(ctx, 31, 0x799D3Cu);
    ctx->pc = 0x799D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D34u;
    // 0x799d38: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799D34u, 0x799D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D3Cu;
label_799d3c:
    // 0x799d3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d40: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799D40u;
    {
        const bool branch_taken_0x799d40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D40u;
        // 0x799d44: 0x8ec6a900  lw          $a2, -0x5700($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d40) {
            ctx->pc = 0x799D88u;
            goto label_799d88;
        }
    }
    ctx->pc = 0x799D48u;
    // 0x799d48: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x799d4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799D4Cu;
    {
        const bool branch_taken_0x799d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D4Cu;
        // 0x799d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d4c) {
            ctx->pc = 0x799D60u;
            goto label_799d60;
        }
    }
    ctx->pc = 0x799D54u;
    // 0x799d54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x799D54u;
    {
        const bool branch_taken_0x799d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D54u;
        // 0x799d58: 0xacc7000c  sw          $a3, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d54) {
            ctx->pc = 0x799D88u;
            goto label_799d88;
        }
    }
    ctx->pc = 0x799D5Cu;
    // 0x799d5c: 0x0  nop
    ctx->pc = 0x799d5cu;
    // NOP
label_799d60:
    // 0x799d60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_799d64:
    // 0x799d64: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x799d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799d68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799D68u;
    {
        const bool branch_taken_0x799d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D68u;
        // 0x799d6c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d68) {
            ctx->pc = 0x799D88u;
            goto label_799d88;
        }
    }
    ctx->pc = 0x799D70u;
    // 0x799d70: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x799d74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799d78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799d7c: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799D7Cu;
    {
        const bool branch_taken_0x799d7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D7Cu;
        // 0x799d80: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d7c) {
            ctx->pc = 0x799D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d64;
        }
    }
    ctx->pc = 0x799D84u;
    // 0x799d84: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x799d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_799d88:
    // 0x799d88: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799d8c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x799d90: 0x8062a820  lb          $v0, -0x57E0($v1)
    ctx->pc = 0x799d90u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79A820u));
    // 0x799d94: 0x24884c58  addiu       $t0, $a0, 0x4C58
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    // 0x799d98: 0x2463a820  addiu       $v1, $v1, -0x57E0
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944800));
    // 0x799d9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799da0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799DA0u;
    {
        const bool branch_taken_0x799da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DA0u;
        // 0x799da4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799da0) {
            ctx->pc = 0x799DD8u;
            goto label_799dd8;
        }
    }
    ctx->pc = 0x799DA8u;
    // 0x799da8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799db0:
    // 0x799db0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799db4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799db8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799dbc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799dc0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799dc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799dc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799DC4u;
    {
        const bool branch_taken_0x799dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC4u;
        // 0x799dc8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dc4) {
            ctx->pc = 0x799DD8u;
            goto label_799dd8;
        }
    }
    ctx->pc = 0x799DCCu;
    // 0x799dcc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799dd0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799DD0u;
    {
        const bool branch_taken_0x799dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799dd0) {
            ctx->pc = 0x799DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DD0u;
            // 0x799dd4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799db0;
        }
    }
    ctx->pc = 0x799DD8u;
label_799dd8:
    // 0x799dd8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799DD8u;
    SET_GPR_U32(ctx, 31, 0x799DE0u);
    ctx->pc = 0x799DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD8u;
    // 0x799ddc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799DD8u, 0x799DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE0u;
label_799de0:
    // 0x799de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799de4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799DE4u;
    {
        const bool branch_taken_0x799de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE4u;
        // 0x799de8: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799de4) {
            ctx->pc = 0x799DF8u;
            goto label_799df8;
        }
    }
    ctx->pc = 0x799DECu;
    // 0x799dec: 0x8c8205a0  lw          $v0, 0x5A0($a0)
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
    // 0x799df0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799df4: 0xac8205a0  sw          $v0, 0x5A0($a0)
    ctx->pc = 0x799df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 2));
label_799df8:
    // 0x799df8: 0xc1e6562  jal         func_799588
    ctx->pc = 0x799DF8u;
    SET_GPR_U32(ctx, 31, 0x799E00u);
    ctx->pc = 0x799DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF8u;
    // 0x799dfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799588u, 0x799DF8u, 0x799E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E00u;
label_799e00:
    // 0x799e00: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799e00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799e04: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799E04u;
    SET_GPR_U32(ctx, 31, 0x799E0Cu);
    ctx->pc = 0x799E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E04u;
    // 0x799e08: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799E04u, 0x799E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E0Cu;
label_799e0c:
    // 0x799e0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e10: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x799E10u;
    {
        const bool branch_taken_0x799e10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E10u;
        // 0x799e14: 0x8ec7a900  lw          $a3, -0x5700($s6) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e10) {
            ctx->pc = 0x799E58u;
            goto label_799e58;
        }
    }
    ctx->pc = 0x799E18u;
    // 0x799e18: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x799e1c: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E1Cu;
    {
        const bool branch_taken_0x799e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x799E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E1Cu;
        // 0x799e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e1c) {
            ctx->pc = 0x799E30u;
            goto label_799e30;
        }
    }
    ctx->pc = 0x799E24u;
    // 0x799e24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x799E24u;
    {
        const bool branch_taken_0x799e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E24u;
        // 0x799e28: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e24) {
            ctx->pc = 0x799E58u;
            goto label_799e58;
        }
    }
    ctx->pc = 0x799E2Cu;
    // 0x799e2c: 0x0  nop
    ctx->pc = 0x799e2cu;
    // NOP
label_799e30:
    // 0x799e30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_799e34:
    // 0x799e34: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x799e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799e38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799E38u;
    {
        const bool branch_taken_0x799e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E38u;
        // 0x799e3c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e38) {
            ctx->pc = 0x799E58u;
            goto label_799e58;
        }
    }
    ctx->pc = 0x799E40u;
    // 0x799e40: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x799e44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799e48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799e4c: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799E4Cu;
    {
        const bool branch_taken_0x799e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x799E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E4Cu;
        // 0x799e50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e4c) {
            ctx->pc = 0x799E34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e34;
        }
    }
    ctx->pc = 0x799E54u;
    // 0x799e54: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_799e58:
    // 0x799e58: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x799e58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799e5c: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799E5Cu;
    SET_GPR_U32(ctx, 31, 0x799E64u);
    ctx->pc = 0x799E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E5Cu;
    // 0x799e60: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799E5Cu, 0x799E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e68: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x799E68u;
    {
        const bool branch_taken_0x799e68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E68u;
        // 0x799e6c: 0x8ec7a900  lw          $a3, -0x5700($s6) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e68) {
            ctx->pc = 0x799EB0u;
            goto label_799eb0;
        }
    }
    ctx->pc = 0x799E70u;
    // 0x799e70: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x799e74: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E74u;
    {
        const bool branch_taken_0x799e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e74) {
            ctx->pc = 0x799E88u;
            goto label_799e88;
        }
    }
    ctx->pc = 0x799E7Cu;
    // 0x799e7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x799E7Cu;
    {
        const bool branch_taken_0x799e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E7Cu;
        // 0x799e80: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e7c) {
            ctx->pc = 0x799EB0u;
            goto label_799eb0;
        }
    }
    ctx->pc = 0x799E84u;
    // 0x799e84: 0x0  nop
    ctx->pc = 0x799e84u;
    // NOP
label_799e88:
    // 0x799e88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_799e8c:
    // 0x799e8c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x799e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799e90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799E90u;
    {
        const bool branch_taken_0x799e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E90u;
        // 0x799e94: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e90) {
            ctx->pc = 0x799EB0u;
            goto label_799eb0;
        }
    }
    ctx->pc = 0x799E98u;
    // 0x799e98: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x799e9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799ea0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799ea4: 0x5486fff9  bnel        $a0, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799EA4u;
    {
        const bool branch_taken_0x799ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x799ea4) {
            ctx->pc = 0x799EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EA4u;
            // 0x799ea8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e8c;
        }
    }
    ctx->pc = 0x799EACu;
    // 0x799eac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_799eb0:
    // 0x799eb0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799eb4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799eb8: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799ebc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799EBCu;
    SET_GPR_U32(ctx, 31, 0x799EC4u);
    ctx->pc = 0x799EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EBCu;
    // 0x799ec0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799EBCu, 0x799EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC4u;
label_799ec4:
    // 0x799ec4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799ec8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799ecc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799eccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ed0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799ed0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ed4: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x799ed8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799edc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x799ee0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799EE0u;
    SET_GPR_U32(ctx, 31, 0x799EE8u);
    ctx->pc = 0x799EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE0u;
    // 0x799ee4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799EE0u, 0x799EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EE8u;
label_799ee8:
    // 0x799ee8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x799ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799eec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x799ef0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ef4: 0x2464ea60  addiu       $a0, $v1, -0x15A0
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x799ef8: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x799EF8u;
    SET_GPR_U32(ctx, 31, 0x799F00u);
    ctx->pc = 0x799EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF8u;
    // 0x799efc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799EF8u, 0x799F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F00u;
label_799f00:
    // 0x799f00: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799f04: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799f08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799f0c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799F0Cu;
    SET_GPR_U32(ctx, 31, 0x799F14u);
    ctx->pc = 0x799F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F0Cu;
    // 0x799f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799F0Cu, 0x799F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F14u;
label_799f14:
    // 0x799f14: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799F14u;
    SET_GPR_U32(ctx, 31, 0x799F1Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799F14u, 0x799F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F1Cu;
label_799f1c:
    // 0x799f1c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799f20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799f24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799f28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799f2c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799F2Cu;
    SET_GPR_U32(ctx, 31, 0x799F34u);
    ctx->pc = 0x799F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F2Cu;
    // 0x799f30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799F2Cu, 0x799F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F34u;
label_799f34:
    // 0x799f34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x799f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f38: 0xc0a581c  jal         func_296070
    ctx->pc = 0x799F38u;
    SET_GPR_U32(ctx, 31, 0x799F40u);
    ctx->pc = 0x799F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F38u;
    // 0x799f3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x799F38u, 0x799F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F40u;
label_799f40:
    // 0x799f40: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799F40u;
    SET_GPR_U32(ctx, 31, 0x799F48u);
    ctx->pc = 0x799F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F40u;
    // 0x799f44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799F40u, 0x799F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F48u;
label_799f48:
    // 0x799f48: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799F48u;
    SET_GPR_U32(ctx, 31, 0x799F50u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799F48u, 0x799F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F50u;
label_799f50:
    // 0x799f50: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799f54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799f54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799f58: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799f5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f60: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799F60u;
    SET_GPR_U32(ctx, 31, 0x799F68u);
    ctx->pc = 0x799F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F60u;
    // 0x799f64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799F60u, 0x799F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F68u;
label_799f68:
    // 0x799f68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f6c: 0xc0a581c  jal         func_296070
    ctx->pc = 0x799F6Cu;
    SET_GPR_U32(ctx, 31, 0x799F74u);
    ctx->pc = 0x799F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F6Cu;
    // 0x799f70: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x799F6Cu, 0x799F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F74u;
label_799f74:
    // 0x799f74: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799f78: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799F78u;
    SET_GPR_U32(ctx, 31, 0x799F80u);
    ctx->pc = 0x799F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F78u;
    // 0x799f7c: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799F78u, 0x799F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F80u;
label_799f80:
    // 0x799f80: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799f84: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799F84u;
    SET_GPR_U32(ctx, 31, 0x799F8Cu);
    ctx->pc = 0x799F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F84u;
    // 0x799f88: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799F84u, 0x799F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F8Cu;
label_799f8c:
    // 0x799f8c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x799F8Cu;
    {
        const bool branch_taken_0x799f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F8Cu;
        // 0x799f90: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f8c) {
            ctx->pc = 0x79A014u;
            goto label_79a014;
        }
    }
    ctx->pc = 0x799F94u;
label_799f94:
    // 0x799f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f98: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x799F98u;
    SET_GPR_U32(ctx, 31, 0x799FA0u);
    ctx->pc = 0x799F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F98u;
    // 0x799f9c: 0x8c44a900  lw          $a0, -0x5700($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x799F98u, 0x799FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA0u;
label_799fa0:
    // 0x799fa0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799fa4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799fa8: 0x8064a820  lb          $a0, -0x57E0($v1)
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79A820u));
    // 0x799fac: 0x2466a820  addiu       $a2, $v1, -0x57E0
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944800));
    // 0x799fb0: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fb8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x799FB8u;
    {
        const bool branch_taken_0x799fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FB8u;
        // 0x799fbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fb8) {
            ctx->pc = 0x799FF0u;
            goto label_799ff0;
        }
    }
    ctx->pc = 0x799FC0u;
    // 0x799fc0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799fc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799fc4: 0x0  nop
    ctx->pc = 0x799fc4u;
    // NOP
label_799fc8:
    // 0x799fc8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799fcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799fd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799fd4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799fd8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799fdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799FDCu;
    {
        const bool branch_taken_0x799fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FDCu;
        // 0x799fe0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fdc) {
            ctx->pc = 0x799FF0u;
            goto label_799ff0;
        }
    }
    ctx->pc = 0x799FE4u;
    // 0x799fe4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799fe8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799FE8u;
    {
        const bool branch_taken_0x799fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799fe8) {
            ctx->pc = 0x799FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FE8u;
            // 0x799fec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799fc8;
        }
    }
    ctx->pc = 0x799FF0u;
label_799ff0:
    // 0x799ff0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799FF0u;
    SET_GPR_U32(ctx, 31, 0x799FF8u);
    ctx->pc = 0x799FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF0u;
    // 0x799ff4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799FF0u, 0x799FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF8u;
label_799ff8:
    // 0x799ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ffc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799FFCu;
    {
        const bool branch_taken_0x799ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FFCu;
        // 0x79a000: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ffc) {
            ctx->pc = 0x79A010u;
            goto label_79a010;
        }
    }
    ctx->pc = 0x79A004u;
    // 0x79a004: 0x8c8205a0  lw          $v0, 0x5A0($a0)
    ctx->pc = 0x79a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
    // 0x79a008: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a00c: 0xac8205a0  sw          $v0, 0x5A0($a0)
    ctx->pc = 0x79a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 2));
label_79a010:
    // 0x79a010: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79a010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_79a014:
    // 0x79a014: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a018: 0x2444ae50  addiu       $a0, $v0, -0x51B0
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    // 0x79a01c: 0x2465a828  addiu       $a1, $v1, -0x57D8
    ctx->pc = 0x79a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944808));
    // 0x79a020: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x79a024: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a028: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A028u;
    SET_GPR_U32(ctx, 31, 0x79A030u);
    ctx->pc = 0x79A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A028u;
    // 0x79a02c: 0x2450ea60  addiu       $s0, $v0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A028u, 0x79A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A030u;
label_79a030:
    // 0x79a030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a034: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79A034u;
    SET_GPR_U32(ctx, 31, 0x79A03Cu);
    ctx->pc = 0x79A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A034u;
    // 0x79a038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79A034u, 0x79A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A03Cu;
label_79a03c:
    // 0x79a03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a040: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x79A040u;
    SET_GPR_U32(ctx, 31, 0x79A048u);
    ctx->pc = 0x79A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A040u;
    // 0x79a044: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x79A040u, 0x79A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A048u;
label_79a048:
    // 0x79a048: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x79a04c: 0x8c832f84  lw          $v1, 0x2F84($a0)
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a050: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A050u;
    SET_GPR_U32(ctx, 31, 0x79A058u);
    ctx->pc = 0x79A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A050u;
    // 0x79a054: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A050u, 0x79A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A058u;
label_79a058:
    // 0x79a058: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x79a058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a05c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x79a05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a060: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x79a060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a064: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x79a064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a068: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x79a068u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a06c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x79a06cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a070: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x79a070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a074: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x79a074u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a078: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x79a078u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a07c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79a07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a080: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x79a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a084: 0x3e00008  jr          $ra
    ctx->pc = 0x79A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A084u;
        // 0x79a088: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A08Cu;
    // 0x79a08c: 0x0  nop
    ctx->pc = 0x79a08cu;
    // NOP
    ctx->pc = 0x79a090u;
}
} // namespace gh_r105
