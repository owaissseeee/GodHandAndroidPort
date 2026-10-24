#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: initGondola__5cR405
// Address: 0x799ab0 - 0x799e30
void initGondola__5cR405_0x799ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initGondola__5cR405_0x799ab0");
#endif

    switch (ctx->pc) {
        case 0x799b10u: goto label_799b10;
        case 0x799b40u: goto label_799b40;
        case 0x799b68u: goto label_799b68;
        case 0x799b98u: goto label_799b98;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bf0u: goto label_799bf0;
        case 0x799c18u: goto label_799c18;
        case 0x799c48u: goto label_799c48;
        case 0x799ca0u: goto label_799ca0;
        case 0x799cb0u: goto label_799cb0;
        case 0x799ce4u: goto label_799ce4;
        case 0x799cf4u: goto label_799cf4;
        case 0x799d04u: goto label_799d04;
        case 0x799d14u: goto label_799d14;
        case 0x799d40u: goto label_799d40;
        case 0x799d58u: goto label_799d58;
        case 0x799d68u: goto label_799d68;
        case 0x799d74u: goto label_799d74;
        case 0x799d8cu: goto label_799d8c;
        case 0x799db8u: goto label_799db8;
        case 0x799dd0u: goto label_799dd0;
        case 0x799de0u: goto label_799de0;
        case 0x799decu: goto label_799dec;
        case 0x799e04u: goto label_799e04;
        default: break;
    }

    ctx->pc = 0x799ab0u;

    // 0x799ab0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799ab4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799ab8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799abc: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799ac0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ac8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799acc: 0x2446a700  addiu       $a2, $v0, -0x5900
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944512));
    // 0x799ad0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ad8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x799adc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x799adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799ae4: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799ae8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x799ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x799aec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799af0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x799af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x799af4: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x799af8: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x799af8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x799afc: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x799b00: 0x8044a700  lb          $a0, -0x5900($v0)
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79A700u));
    // 0x799b04: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799B04u;
    {
        const bool branch_taken_0x799b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B04u;
        // 0x799b08: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b04) {
            ctx->pc = 0x799B38u;
            goto label_799b38;
        }
    }
    ctx->pc = 0x799B0Cu;
    // 0x799b0c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799b10:
    // 0x799b10: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799b14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799b18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799b1c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799b20: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799b24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799B24u;
    {
        const bool branch_taken_0x799b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B24u;
        // 0x799b28: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b24) {
            ctx->pc = 0x799B38u;
            goto label_799b38;
        }
    }
    ctx->pc = 0x799B2Cu;
    // 0x799b2c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799b30: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799B30u;
    {
        const bool branch_taken_0x799b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b30) {
            ctx->pc = 0x799B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B30u;
            // 0x799b34: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b10;
        }
    }
    ctx->pc = 0x799B38u;
label_799b38:
    // 0x799b38: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799B38u;
    SET_GPR_U32(ctx, 31, 0x799B40u);
    ctx->pc = 0x799B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B38u;
    // 0x799b3c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799B38u, 0x799B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B40u;
label_799b40:
    // 0x799b40: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x799b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x799b44: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x799b48: 0x2643a708  addiu       $v1, $s2, -0x58F8
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944520));
    // 0x799b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b50: 0x8242a708  lb          $v0, -0x58F8($s2)
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294944520)));
    // 0x799b54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799B54u;
    {
        const bool branch_taken_0x799b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B54u;
        // 0x799b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b54) {
            ctx->pc = 0x799B90u;
            goto label_799b90;
        }
    }
    ctx->pc = 0x799B5Cu;
    // 0x799b5c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b60: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799b64: 0x0  nop
    ctx->pc = 0x799b64u;
    // NOP
label_799b68:
    // 0x799b68: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799b6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799b70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799b74: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799b78: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799b7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799B7Cu;
    {
        const bool branch_taken_0x799b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B7Cu;
        // 0x799b80: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b7c) {
            ctx->pc = 0x799B90u;
            goto label_799b90;
        }
    }
    ctx->pc = 0x799B84u;
    // 0x799b84: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799b88: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799B88u;
    {
        const bool branch_taken_0x799b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b88) {
            ctx->pc = 0x799B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B88u;
            // 0x799b8c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b68;
        }
    }
    ctx->pc = 0x799B90u;
label_799b90:
    // 0x799b90: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799B90u;
    SET_GPR_U32(ctx, 31, 0x799B98u);
    ctx->pc = 0x799B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B90u;
    // 0x799b94: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799B90u, 0x799B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B98u;
label_799b98:
    // 0x799b98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x799b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x799b9c: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x799ba0: 0x2663a710  addiu       $v1, $s3, -0x58F0
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944528));
    // 0x799ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba8: 0x8262a710  lb          $v0, -0x58F0($s3)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294944528)));
    // 0x799bac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799BACu;
    {
        const bool branch_taken_0x799bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BACu;
        // 0x799bb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bac) {
            ctx->pc = 0x799BE8u;
            goto label_799be8;
        }
    }
    ctx->pc = 0x799BB4u;
    // 0x799bb4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bb8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799bbc: 0x0  nop
    ctx->pc = 0x799bbcu;
    // NOP
label_799bc0:
    // 0x799bc0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799bc4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799bc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799bcc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799bd0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799bd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BD4u;
    {
        const bool branch_taken_0x799bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD4u;
        // 0x799bd8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd4) {
            ctx->pc = 0x799BE8u;
            goto label_799be8;
        }
    }
    ctx->pc = 0x799BDCu;
    // 0x799bdc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799be0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799BE0u;
    {
        const bool branch_taken_0x799be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799be0) {
            ctx->pc = 0x799BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BE0u;
            // 0x799be4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799BE8u;
label_799be8:
    // 0x799be8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799BE8u;
    SET_GPR_U32(ctx, 31, 0x799BF0u);
    ctx->pc = 0x799BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BE8u;
    // 0x799bec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799BE8u, 0x799BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF0u;
label_799bf0:
    // 0x799bf0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x799bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x799bf4: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x799bf8: 0x2683a718  addiu       $v1, $s4, -0x58E8
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944536));
    // 0x799bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c00: 0x8282a718  lb          $v0, -0x58E8($s4)
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294944536)));
    // 0x799c04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799C04u;
    {
        const bool branch_taken_0x799c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c04) {
            ctx->pc = 0x799C40u;
            goto label_799c40;
        }
    }
    ctx->pc = 0x799C0Cu;
    // 0x799c0c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c10: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799c14: 0x0  nop
    ctx->pc = 0x799c14u;
    // NOP
label_799c18:
    // 0x799c18: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799c1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799c20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799c24: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799c28: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799c2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799C2Cu;
    {
        const bool branch_taken_0x799c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C2Cu;
        // 0x799c30: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c2c) {
            ctx->pc = 0x799C40u;
            goto label_799c40;
        }
    }
    ctx->pc = 0x799C34u;
    // 0x799c34: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799c38: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799C38u;
    {
        const bool branch_taken_0x799c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c38) {
            ctx->pc = 0x799C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C38u;
            // 0x799c3c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c18;
        }
    }
    ctx->pc = 0x799C40u;
label_799c40:
    // 0x799c40: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799C40u;
    SET_GPR_U32(ctx, 31, 0x799C48u);
    ctx->pc = 0x799C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C40u;
    // 0x799c44: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799C40u, 0x799C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C48u;
label_799c48:
    // 0x799c48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799c48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x799c50: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x799C50u;
    {
        const bool branch_taken_0x799c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C50u;
        // 0x799c54: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c50) {
            ctx->pc = 0x799E04u;
            goto label_799e04;
        }
    }
    ctx->pc = 0x799C58u;
    // 0x799c58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799c5c: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x799C5Cu;
    {
        const bool branch_taken_0x799c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799c5c) {
            ctx->pc = 0x799C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C5Cu;
            // 0x799c60: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E08u;
            goto label_799e08;
        }
    }
    ctx->pc = 0x799C64u;
    // 0x799c64: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x799c68: 0x50800067  beql        $a0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x799C68u;
    {
        const bool branch_taken_0x799c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799c68) {
            ctx->pc = 0x799C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C68u;
            // 0x799c6c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E08u;
            goto label_799e08;
        }
    }
    ctx->pc = 0x799C70u;
    // 0x799c70: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x799C70u;
    {
        const bool branch_taken_0x799c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C70u;
        // 0x799c74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c70) {
            ctx->pc = 0x799E04u;
            goto label_799e04;
        }
    }
    ctx->pc = 0x799C78u;
    // 0x799c78: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x799c7c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x799c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x799c80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799c84: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x799c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x799c88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799c8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799c90: 0xa2020014  sb          $v0, 0x14($s0)
    ctx->pc = 0x799c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x799c94: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x799c94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x799c98: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x799C98u;
    SET_GPR_U32(ctx, 31, 0x799CA0u);
    ctx->pc = 0x799C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C98u;
    // 0x799c9c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x799C98u, 0x799CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA0u;
label_799ca0:
    // 0x799ca0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x799ca4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x799ca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x799ca8: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x799CA8u;
    SET_GPR_U32(ctx, 31, 0x799CB0u);
    ctx->pc = 0x799CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA8u;
    // 0x799cac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x799CA8u, 0x799CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB0u;
label_799cb0:
    // 0x799cb0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x799cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x799cb4: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x799cb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799cbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cc0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x799cc4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799cc8: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x799cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x799ccc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799cd0: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x799cd4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799cd8: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x799cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x799cdc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x799CDCu;
    SET_GPR_U32(ctx, 31, 0x799CE4u);
    ctx->pc = 0x799CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CDCu;
    // 0x799ce0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x799CDCu, 0x799CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE4u;
label_799ce4:
    // 0x799ce4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x799ce8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799cec: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x799CECu;
    SET_GPR_U32(ctx, 31, 0x799CF4u);
    ctx->pc = 0x799CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CECu;
    // 0x799cf0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x799CECu, 0x799CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CF4u;
label_799cf4:
    // 0x799cf4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799cf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799cfc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x799CFCu;
    SET_GPR_U32(ctx, 31, 0x799D04u);
    ctx->pc = 0x799D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CFCu;
    // 0x799d00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x799CFCu, 0x799D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D04u;
label_799d04:
    // 0x799d04: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799d08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d0c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x799D0Cu;
    SET_GPR_U32(ctx, 31, 0x799D14u);
    ctx->pc = 0x799D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D0Cu;
    // 0x799d10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x799D0Cu, 0x799D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D14u;
label_799d14:
    // 0x799d14: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799d18: 0x8c828658  lw          $v0, -0x79A8($a0)
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799d1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799d20: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x799D20u;
    {
        const bool branch_taken_0x799d20 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D20u;
        // 0x799d24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d20) {
            ctx->pc = 0x799D60u;
            goto label_799d60;
        }
    }
    ctx->pc = 0x799D28u;
    // 0x799d28: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799d2c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d30: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799d30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799d34: 0x24a596a0  addiu       $a1, $a1, -0x6960
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940320));
    // 0x799d38: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799D38u;
    SET_GPR_U32(ctx, 31, 0x799D40u);
    ctx->pc = 0x799D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D38u;
    // 0x799d3c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799D38u, 0x799D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D40u;
label_799d40:
    // 0x799d40: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x799d44: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d48: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799d4c: 0x24a5a720  addiu       $a1, $a1, -0x58E0
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944544));
    // 0x799d50: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799D50u;
    SET_GPR_U32(ctx, 31, 0x799D58u);
    ctx->pc = 0x799D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D50u;
    // 0x799d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799D50u, 0x799D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D58u;
label_799d58:
    // 0x799d58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x799D58u;
    {
        const bool branch_taken_0x799d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D58u;
        // 0x799d5c: 0x8e228658  lw          $v0, -0x79A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d58) {
            ctx->pc = 0x799D90u;
            goto label_799d90;
        }
    }
    ctx->pc = 0x799D60u;
label_799d60:
    // 0x799d60: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x799D60u;
    SET_GPR_U32(ctx, 31, 0x799D68u);
    ctx->pc = 0x799D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D60u;
    // 0x799d64: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x799D60u, 0x799D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D68u;
label_799d68:
    // 0x799d68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x799d6c: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799D6Cu;
    SET_GPR_U32(ctx, 31, 0x799D74u);
    ctx->pc = 0x799D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D6Cu;
    // 0x799d70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799D6Cu, 0x799D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D74u;
label_799d74:
    // 0x799d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d84: 0xc1e678c  jal         func_799E30
    ctx->pc = 0x799D84u;
    SET_GPR_U32(ctx, 31, 0x799D8Cu);
    ctx->pc = 0x799D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D84u;
    // 0x799d88: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E30u, 0x799D84u, 0x799D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D8Cu;
label_799d8c:
    // 0x799d8c: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
label_799d90:
    // 0x799d90: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799d94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799d98: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799d9c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x799D9Cu;
    {
        const bool branch_taken_0x799d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D9Cu;
        // 0x799da0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d9c) {
            ctx->pc = 0x799DD8u;
            goto label_799dd8;
        }
    }
    ctx->pc = 0x799DA4u;
    // 0x799da4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799da8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799dac: 0x24a598a0  addiu       $a1, $a1, -0x6760
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940832));
    // 0x799db0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799DB0u;
    SET_GPR_U32(ctx, 31, 0x799DB8u);
    ctx->pc = 0x799DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB0u;
    // 0x799db4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799DB0u, 0x799DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB8u;
label_799db8:
    // 0x799db8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x799dbc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799dc0: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799dc4: 0x24a5a728  addiu       $a1, $a1, -0x58D8
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944552));
    // 0x799dc8: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799DC8u;
    SET_GPR_U32(ctx, 31, 0x799DD0u);
    ctx->pc = 0x799DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC8u;
    // 0x799dcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799DC8u, 0x799DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD0u;
label_799dd0:
    // 0x799dd0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x799DD0u;
    {
        const bool branch_taken_0x799dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD0u;
        // 0x799dd4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dd0) {
            ctx->pc = 0x799E08u;
            goto label_799e08;
        }
    }
    ctx->pc = 0x799DD8u;
label_799dd8:
    // 0x799dd8: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x799DD8u;
    SET_GPR_U32(ctx, 31, 0x799DE0u);
    ctx->pc = 0x799DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD8u;
    // 0x799ddc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x799DD8u, 0x799DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE0u;
label_799de0:
    // 0x799de0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x799de4: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799DE4u;
    SET_GPR_U32(ctx, 31, 0x799DECu);
    ctx->pc = 0x799DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE4u;
    // 0x799de8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799DE4u, 0x799DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DECu;
label_799dec:
    // 0x799dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799df0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799df4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799df8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dfc: 0xc1e678c  jal         func_799E30
    ctx->pc = 0x799DFCu;
    SET_GPR_U32(ctx, 31, 0x799E04u);
    ctx->pc = 0x799E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DFCu;
    // 0x799e00: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E30u, 0x799DFCu, 0x799E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E04u;
label_799e04:
    // 0x799e04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799e08:
    // 0x799e08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799e0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799e0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799e10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799e14: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x799e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799e1c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x799e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799e20: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x799e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799e24: 0x3e00008  jr          $ra
    ctx->pc = 0x799E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E24u;
        // 0x799e28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E2Cu;
    // 0x799e2c: 0x0  nop
    ctx->pc = 0x799e2cu;
    // NOP
    ctx->pc = 0x799e30u;
}
} // namespace gh_r405
