#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r408_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r408
{
// Function: checkEventEmSet__5cR408
// Address: 0x799b28 - 0x799d88
void checkEventEmSet__5cR408_0x799b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkEventEmSet__5cR408_0x799b28");
#endif

    switch (ctx->pc) {
        case 0x799b28u: goto label_799b28;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b30u: goto label_799b30;
        case 0x799b34u: goto label_799b34;
        case 0x799b38u: goto label_799b38;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b40u: goto label_799b40;
        case 0x799b44u: goto label_799b44;
        case 0x799b48u: goto label_799b48;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b50u: goto label_799b50;
        case 0x799b54u: goto label_799b54;
        case 0x799b58u: goto label_799b58;
        case 0x799b5cu: goto label_799b5c;
        case 0x799b60u: goto label_799b60;
        case 0x799b64u: goto label_799b64;
        case 0x799b68u: goto label_799b68;
        case 0x799b6cu: goto label_799b6c;
        case 0x799b70u: goto label_799b70;
        case 0x799b74u: goto label_799b74;
        case 0x799b78u: goto label_799b78;
        case 0x799b7cu: goto label_799b7c;
        case 0x799b80u: goto label_799b80;
        case 0x799b84u: goto label_799b84;
        case 0x799b88u: goto label_799b88;
        case 0x799b8cu: goto label_799b8c;
        case 0x799b90u: goto label_799b90;
        case 0x799b94u: goto label_799b94;
        case 0x799b98u: goto label_799b98;
        case 0x799b9cu: goto label_799b9c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799ba4u: goto label_799ba4;
        case 0x799ba8u: goto label_799ba8;
        case 0x799bacu: goto label_799bac;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb4u: goto label_799bb4;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bc4u: goto label_799bc4;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        case 0x799bd8u: goto label_799bd8;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be0u: goto label_799be0;
        case 0x799be4u: goto label_799be4;
        case 0x799be8u: goto label_799be8;
        case 0x799becu: goto label_799bec;
        case 0x799bf0u: goto label_799bf0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799bf8u: goto label_799bf8;
        case 0x799bfcu: goto label_799bfc;
        case 0x799c00u: goto label_799c00;
        case 0x799c04u: goto label_799c04;
        case 0x799c08u: goto label_799c08;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c10u: goto label_799c10;
        case 0x799c14u: goto label_799c14;
        case 0x799c18u: goto label_799c18;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c20u: goto label_799c20;
        case 0x799c24u: goto label_799c24;
        case 0x799c28u: goto label_799c28;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c30u: goto label_799c30;
        case 0x799c34u: goto label_799c34;
        case 0x799c38u: goto label_799c38;
        case 0x799c3cu: goto label_799c3c;
        case 0x799c40u: goto label_799c40;
        case 0x799c44u: goto label_799c44;
        case 0x799c48u: goto label_799c48;
        case 0x799c4cu: goto label_799c4c;
        case 0x799c50u: goto label_799c50;
        case 0x799c54u: goto label_799c54;
        case 0x799c58u: goto label_799c58;
        case 0x799c5cu: goto label_799c5c;
        case 0x799c60u: goto label_799c60;
        case 0x799c64u: goto label_799c64;
        case 0x799c68u: goto label_799c68;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c70u: goto label_799c70;
        case 0x799c74u: goto label_799c74;
        case 0x799c78u: goto label_799c78;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c80u: goto label_799c80;
        case 0x799c84u: goto label_799c84;
        case 0x799c88u: goto label_799c88;
        case 0x799c8cu: goto label_799c8c;
        case 0x799c90u: goto label_799c90;
        case 0x799c94u: goto label_799c94;
        case 0x799c98u: goto label_799c98;
        case 0x799c9cu: goto label_799c9c;
        case 0x799ca0u: goto label_799ca0;
        case 0x799ca4u: goto label_799ca4;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cacu: goto label_799cac;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cb4u: goto label_799cb4;
        case 0x799cb8u: goto label_799cb8;
        case 0x799cbcu: goto label_799cbc;
        case 0x799cc0u: goto label_799cc0;
        case 0x799cc4u: goto label_799cc4;
        case 0x799cc8u: goto label_799cc8;
        case 0x799cccu: goto label_799ccc;
        case 0x799cd0u: goto label_799cd0;
        case 0x799cd4u: goto label_799cd4;
        case 0x799cd8u: goto label_799cd8;
        case 0x799cdcu: goto label_799cdc;
        case 0x799ce0u: goto label_799ce0;
        case 0x799ce4u: goto label_799ce4;
        case 0x799ce8u: goto label_799ce8;
        case 0x799cecu: goto label_799cec;
        case 0x799cf0u: goto label_799cf0;
        case 0x799cf4u: goto label_799cf4;
        case 0x799cf8u: goto label_799cf8;
        case 0x799cfcu: goto label_799cfc;
        case 0x799d00u: goto label_799d00;
        case 0x799d04u: goto label_799d04;
        case 0x799d08u: goto label_799d08;
        case 0x799d0cu: goto label_799d0c;
        case 0x799d10u: goto label_799d10;
        case 0x799d14u: goto label_799d14;
        case 0x799d18u: goto label_799d18;
        case 0x799d1cu: goto label_799d1c;
        case 0x799d20u: goto label_799d20;
        case 0x799d24u: goto label_799d24;
        case 0x799d28u: goto label_799d28;
        case 0x799d2cu: goto label_799d2c;
        case 0x799d30u: goto label_799d30;
        case 0x799d34u: goto label_799d34;
        case 0x799d38u: goto label_799d38;
        case 0x799d3cu: goto label_799d3c;
        case 0x799d40u: goto label_799d40;
        case 0x799d44u: goto label_799d44;
        case 0x799d48u: goto label_799d48;
        case 0x799d4cu: goto label_799d4c;
        case 0x799d50u: goto label_799d50;
        case 0x799d54u: goto label_799d54;
        case 0x799d58u: goto label_799d58;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d60u: goto label_799d60;
        case 0x799d64u: goto label_799d64;
        case 0x799d68u: goto label_799d68;
        case 0x799d6cu: goto label_799d6c;
        case 0x799d70u: goto label_799d70;
        case 0x799d74u: goto label_799d74;
        case 0x799d78u: goto label_799d78;
        case 0x799d7cu: goto label_799d7c;
        case 0x799d80u: goto label_799d80;
        case 0x799d84u: goto label_799d84;
        default: break;
    }

    ctx->pc = 0x799b28u;

label_799b28:
    // 0x799b28: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_799b2c:
    // 0x799b2c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799b30:
    // 0x799b30: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x799b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_799b34:
    // 0x799b34: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x799b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_799b38:
    // 0x799b38: 0x24509f80  addiu       $s0, $v0, -0x6080
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
label_799b3c:
    // 0x799b3c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x799b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_799b40:
    // 0x799b40: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799b44:
    // 0x799b44: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x799b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_799b48:
    // 0x799b48: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799b4c:
    // 0x799b4c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x799b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_799b50:
    // 0x799b50: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
label_799b54:
    // 0x799b54: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x799b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_799b58:
    // 0x799b58: 0x3c144000  lui         $s4, 0x4000
    ctx->pc = 0x799b58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16384 << 16));
label_799b5c:
    // 0x799b5c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x799b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_799b60:
    // 0x799b60: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
label_799b64:
    // 0x799b64: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x799b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_799b68:
    // 0x799b68: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x799b68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799b6c:
    // 0x799b6c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x799b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_799b70:
    // 0x799b70: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x799b70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799b74:
    // 0x799b74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_799b78:
    // 0x799b78: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_799b7c:
    // 0x799b7c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_799b80:
    // 0x799b80: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_799b84:
    // 0x799b84: 0x0  nop
    ctx->pc = 0x799b84u;
    // NOP
label_799b88:
    // 0x799b88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x799b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_799b8c:
    // 0x799b8c: 0xc0a572a  jal         func_295CA8
label_799b90:
    if (ctx->pc == 0x799B90u) {
        ctx->pc = 0x799B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B8Cu;
        // 0x799b90: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B94u;
        goto label_799b94;
    }
    ctx->pc = 0x799B8Cu;
    SET_GPR_U32(ctx, 31, 0x799B94u);
    ctx->pc = 0x799B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B8Cu;
    // 0x799b90: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799B8Cu, 0x799B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B94u;
label_799b94:
    // 0x799b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799b98:
    // 0x799b98: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_799b9c:
    if (ctx->pc == 0x799B9Cu) {
        ctx->pc = 0x799B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B98u;
        // 0x799b9c: 0x8ea38658  lw          $v1, -0x79A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BA0u;
        goto label_799ba0;
    }
    ctx->pc = 0x799B98u;
    {
        const bool branch_taken_0x799b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x799B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B98u;
        // 0x799b9c: 0x8ea38658  lw          $v1, -0x79A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b98) {
            ctx->pc = 0x799BB0u;
            goto label_799bb0;
        }
    }
    ctx->pc = 0x799BA0u;
label_799ba0:
    // 0x799ba0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799ba4:
    // 0x799ba4: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_799ba8:
    // 0x799ba8: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_799bac:
    if (ctx->pc == 0x799BACu) {
        ctx->pc = 0x799BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA8u;
        // 0x799bac: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BB0u;
        goto label_799bb0;
    }
    ctx->pc = 0x799BA8u;
    {
        const bool branch_taken_0x799ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA8u;
        // 0x799bac: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ba8) {
            ctx->pc = 0x799CCCu;
            goto label_799ccc;
        }
    }
    ctx->pc = 0x799BB0u;
label_799bb0:
    // 0x799bb0: 0x8ea38658  lw          $v1, -0x79A8($s5)
    ctx->pc = 0x799bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
label_799bb4:
    // 0x799bb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799bb8:
    // 0x799bb8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x799bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_799bbc:
    // 0x799bbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_799bc0:
    if (ctx->pc == 0x799BC0u) {
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BC4u;
        goto label_799bc4;
    }
    ctx->pc = 0x799BBCu;
    {
        const bool branch_taken_0x799bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bbc) {
            ctx->pc = 0x799BD8u;
            goto label_799bd8;
        }
    }
    ctx->pc = 0x799BC4u;
label_799bc4:
    // 0x799bc4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_799bc8:
    // 0x799bc8: 0xc0b56a8  jal         func_2D5AA0
label_799bcc:
    if (ctx->pc == 0x799BCCu) {
        ctx->pc = 0x799BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC8u;
        // 0x799bcc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BD0u;
        goto label_799bd0;
    }
    ctx->pc = 0x799BC8u;
    SET_GPR_U32(ctx, 31, 0x799BD0u);
    ctx->pc = 0x799BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC8u;
    // 0x799bcc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799BC8u, 0x799BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BD0u;
label_799bd0:
    // 0x799bd0: 0x10000005  b           . + 4 + (0x5 << 2)
label_799bd4:
    if (ctx->pc == 0x799BD4u) {
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BD8u;
        goto label_799bd8;
    }
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799BE8u;
            goto label_799be8;
        }
    }
    ctx->pc = 0x799BD8u;
label_799bd8:
    // 0x799bd8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_799bdc:
    // 0x799bdc: 0xc0b56a8  jal         func_2D5AA0
label_799be0:
    if (ctx->pc == 0x799BE0u) {
        ctx->pc = 0x799BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BDCu;
        // 0x799be0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BE4u;
        goto label_799be4;
    }
    ctx->pc = 0x799BDCu;
    SET_GPR_U32(ctx, 31, 0x799BE4u);
    ctx->pc = 0x799BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BDCu;
    // 0x799be0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799BDCu, 0x799BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE4u;
label_799be4:
    // 0x799be4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_799be8:
    // 0x799be8: 0x2ec20004  sltiu       $v0, $s6, 0x4
    ctx->pc = 0x799be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_799bec:
    // 0x799bec: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_799bf0:
    if (ctx->pc == 0x799BF0u) {
        ctx->pc = 0x799BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BECu;
        // 0x799bf0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BF4u;
        goto label_799bf4;
    }
    ctx->pc = 0x799BECu;
    {
        const bool branch_taken_0x799bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BECu;
        // 0x799bf0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bec) {
            ctx->pc = 0x799CE0u;
            goto label_799ce0;
        }
    }
    ctx->pc = 0x799BF4u;
label_799bf4:
    // 0x799bf4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_799bf8:
    // 0x799bf8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_799bfc:
    // 0x799bfc: 0x24646ab0  addiu       $a0, $v1, 0x6AB0
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
label_799c00:
    // 0x799c00: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x799c00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_799c04:
    // 0x799c04: 0xc0a54b4  jal         func_2952D0
label_799c08:
    if (ctx->pc == 0x799C08u) {
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C0Cu;
        goto label_799c0c;
    }
    ctx->pc = 0x799C04u;
    SET_GPR_U32(ctx, 31, 0x799C0Cu);
    ctx->pc = 0x799C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C04u;
    // 0x799c08: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799C04u, 0x799C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C0Cu;
label_799c0c:
    // 0x799c0c: 0xc0a572a  jal         func_295CA8
label_799c10:
    if (ctx->pc == 0x799C10u) {
        ctx->pc = 0x799C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C0Cu;
        // 0x799c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C14u;
        goto label_799c14;
    }
    ctx->pc = 0x799C0Cu;
    SET_GPR_U32(ctx, 31, 0x799C14u);
    ctx->pc = 0x799C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C0Cu;
    // 0x799c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799C0Cu, 0x799C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C14u;
label_799c14:
    // 0x799c14: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_799c18:
    if (ctx->pc == 0x799C18u) {
        ctx->pc = 0x799C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C14u;
        // 0x799c18: 0x8ea38658  lw          $v1, -0x79A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C1Cu;
        goto label_799c1c;
    }
    ctx->pc = 0x799C14u;
    {
        const bool branch_taken_0x799c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C14u;
        // 0x799c18: 0x8ea38658  lw          $v1, -0x79A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c14) {
            ctx->pc = 0x799C40u;
            goto label_799c40;
        }
    }
    ctx->pc = 0x799C1Cu;
label_799c1c:
    // 0x799c1c: 0xc0a56ae  jal         func_295AB8
label_799c20:
    if (ctx->pc == 0x799C20u) {
        ctx->pc = 0x799C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C1Cu;
        // 0x799c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C24u;
        goto label_799c24;
    }
    ctx->pc = 0x799C1Cu;
    SET_GPR_U32(ctx, 31, 0x799C24u);
    ctx->pc = 0x799C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C1Cu;
    // 0x799c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799C1Cu, 0x799C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C24u;
label_799c24:
    // 0x799c24: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799c28:
    // 0x799c28: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799c2c:
    // 0x799c2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799c30:
    // 0x799c30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799c34:
    // 0x799c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799c38:
    // 0x799c38: 0x10000010  b           . + 4 + (0x10 << 2)
label_799c3c:
    if (ctx->pc == 0x799C3Cu) {
        ctx->pc = 0x799C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C38u;
        // 0x799c3c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C40u;
        goto label_799c40;
    }
    ctx->pc = 0x799C38u;
    {
        const bool branch_taken_0x799c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C38u;
        // 0x799c3c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c38) {
            ctx->pc = 0x799C7Cu;
            goto label_799c7c;
        }
    }
    ctx->pc = 0x799C40u;
label_799c40:
    // 0x799c40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799c44:
    // 0x799c44: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x799c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_799c48:
    // 0x799c48: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_799c4c:
    if (ctx->pc == 0x799C4Cu) {
        ctx->pc = 0x799C50u;
        goto label_799c50;
    }
    ctx->pc = 0x799C48u;
    {
        const bool branch_taken_0x799c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c48) {
            ctx->pc = 0x799C8Cu;
            goto label_799c8c;
        }
    }
    ctx->pc = 0x799C50u;
label_799c50:
    // 0x799c50: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x799c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_799c54:
    // 0x799c54: 0x27c4ea60  addiu       $a0, $fp, -0x15A0
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
label_799c58:
    // 0x799c58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799c5c:
    // 0x799c5c: 0xc0b0a92  jal         func_2C2A48
label_799c60:
    if (ctx->pc == 0x799C60u) {
        ctx->pc = 0x799C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C5Cu;
        // 0x799c60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C64u;
        goto label_799c64;
    }
    ctx->pc = 0x799C5Cu;
    SET_GPR_U32(ctx, 31, 0x799C64u);
    ctx->pc = 0x799C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C5Cu;
    // 0x799c60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799C5Cu, 0x799C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C64u;
label_799c64:
    // 0x799c64: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799c68:
    // 0x799c68: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799c6c:
    // 0x799c6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799c70:
    // 0x799c70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799c74:
    // 0x799c74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799c78:
    // 0x799c78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799c7c:
    // 0x799c7c: 0xc0a57e0  jal         func_295F80
label_799c80:
    if (ctx->pc == 0x799C80u) {
        ctx->pc = 0x799C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C7Cu;
        // 0x799c80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C84u;
        goto label_799c84;
    }
    ctx->pc = 0x799C7Cu;
    SET_GPR_U32(ctx, 31, 0x799C84u);
    ctx->pc = 0x799C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C7Cu;
    // 0x799c80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799C7Cu, 0x799C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C84u;
label_799c84:
    // 0x799c84: 0x10000011  b           . + 4 + (0x11 << 2)
label_799c88:
    if (ctx->pc == 0x799C88u) {
        ctx->pc = 0x799C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C84u;
        // 0x799c88: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C8Cu;
        goto label_799c8c;
    }
    ctx->pc = 0x799C84u;
    {
        const bool branch_taken_0x799c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C84u;
        // 0x799c88: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c84) {
            ctx->pc = 0x799CCCu;
            goto label_799ccc;
        }
    }
    ctx->pc = 0x799C8Cu;
label_799c8c:
    // 0x799c8c: 0xc0b6dac  jal         func_2DB6B0
label_799c90:
    if (ctx->pc == 0x799C90u) {
        ctx->pc = 0x799C94u;
        goto label_799c94;
    }
    ctx->pc = 0x799C8Cu;
    SET_GPR_U32(ctx, 31, 0x799C94u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799C8Cu, 0x799C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C94u;
label_799c94:
    // 0x799c94: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799c98:
    // 0x799c98: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799c9c:
    // 0x799c9c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799ca0:
    // 0x799ca0: 0xa0f809  jalr        $a1
label_799ca4:
    if (ctx->pc == 0x799CA4u) {
        ctx->pc = 0x799CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA0u;
        // 0x799ca4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CA8u;
        goto label_799ca8;
    }
    ctx->pc = 0x799CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799CA8u);
        ctx->pc = 0x799CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA0u;
        // 0x799ca4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CA0u, 0x799CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799CA8u;
label_799ca8:
    // 0x799ca8: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799cac:
    // 0x799cac: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799cacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799cb0:
    // 0x799cb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799cb4:
    // 0x799cb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799cb8:
    // 0x799cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799cbc:
    // 0x799cbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799cc0:
    // 0x799cc0: 0xc0a57e0  jal         func_295F80
label_799cc4:
    if (ctx->pc == 0x799CC4u) {
        ctx->pc = 0x799CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC0u;
        // 0x799cc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CC8u;
        goto label_799cc8;
    }
    ctx->pc = 0x799CC0u;
    SET_GPR_U32(ctx, 31, 0x799CC8u);
    ctx->pc = 0x799CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC0u;
    // 0x799cc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799CC0u, 0x799CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CC8u;
label_799cc8:
    // 0x799cc8: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799ccc:
    // 0x799ccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799cd0:
    // 0x799cd0: 0xc0b56a8  jal         func_2D5AA0
label_799cd4:
    if (ctx->pc == 0x799CD4u) {
        ctx->pc = 0x799CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD0u;
        // 0x799cd4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CD8u;
        goto label_799cd8;
    }
    ctx->pc = 0x799CD0u;
    SET_GPR_U32(ctx, 31, 0x799CD8u);
    ctx->pc = 0x799CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD0u;
    // 0x799cd4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799CD0u, 0x799CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CD8u;
label_799cd8:
    // 0x799cd8: 0x1000ffab  b           . + 4 + (-0x55 << 2)
label_799cdc:
    if (ctx->pc == 0x799CDCu) {
        ctx->pc = 0x799CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD8u;
        // 0x799cdc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CE0u;
        goto label_799ce0;
    }
    ctx->pc = 0x799CD8u;
    {
        const bool branch_taken_0x799cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD8u;
        // 0x799cdc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cd8) {
            ctx->pc = 0x799B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b88;
        }
    }
    ctx->pc = 0x799CE0u;
label_799ce0:
    // 0x799ce0: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799ce4:
    // 0x799ce4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_799ce8:
    // 0x799ce8: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
label_799cec:
    // 0x799cec: 0x8083a030  lb          $v1, -0x5FD0($a0)
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294942768)));
label_799cf0:
    // 0x799cf0: 0x2482a030  addiu       $v0, $a0, -0x5FD0
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942768));
label_799cf4:
    // 0x799cf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799cf8:
    // 0x799cf8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_799cfc:
    if (ctx->pc == 0x799CFCu) {
        ctx->pc = 0x799CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF8u;
        // 0x799cfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D00u;
        goto label_799d00;
    }
    ctx->pc = 0x799CF8u;
    {
        const bool branch_taken_0x799cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF8u;
        // 0x799cfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cf8) {
            ctx->pc = 0x799D30u;
            goto label_799d30;
        }
    }
    ctx->pc = 0x799D00u;
label_799d00:
    // 0x799d00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799d04:
    // 0x799d04: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799d08:
    // 0x799d08: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799d0c:
    // 0x799d0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799d10:
    // 0x799d10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799d14:
    // 0x799d14: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799d18:
    // 0x799d18: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799d18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799d1c:
    // 0x799d1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799d20:
    if (ctx->pc == 0x799D20u) {
        ctx->pc = 0x799D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D1Cu;
        // 0x799d20: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D24u;
        goto label_799d24;
    }
    ctx->pc = 0x799D1Cu;
    {
        const bool branch_taken_0x799d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D1Cu;
        // 0x799d20: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d1c) {
            ctx->pc = 0x799D30u;
            goto label_799d30;
        }
    }
    ctx->pc = 0x799D24u;
label_799d24:
    // 0x799d24: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799d28:
    // 0x799d28: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799d2c:
    if (ctx->pc == 0x799D2Cu) {
        ctx->pc = 0x799D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D28u;
        // 0x799d2c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D30u;
        goto label_799d30;
    }
    ctx->pc = 0x799D28u;
    {
        const bool branch_taken_0x799d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799d28) {
            ctx->pc = 0x799D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D28u;
            // 0x799d2c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d08;
        }
    }
    ctx->pc = 0x799D30u;
label_799d30:
    // 0x799d30: 0xc053f66  jal         func_14FD98
label_799d34:
    if (ctx->pc == 0x799D34u) {
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D38u;
        goto label_799d38;
    }
    ctx->pc = 0x799D30u;
    SET_GPR_U32(ctx, 31, 0x799D38u);
    ctx->pc = 0x799D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D30u;
    // 0x799d34: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799D30u, 0x799D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D38u;
label_799d38:
    // 0x799d38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_799d3c:
    if (ctx->pc == 0x799D3Cu) {
        ctx->pc = 0x799D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D38u;
        // 0x799d3c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D40u;
        goto label_799d40;
    }
    ctx->pc = 0x799D38u;
    {
        const bool branch_taken_0x799d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799d38) {
            ctx->pc = 0x799D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D38u;
            // 0x799d3c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D4Cu;
            goto label_799d4c;
        }
    }
    ctx->pc = 0x799D40u;
label_799d40:
    // 0x799d40: 0xc06f708  jal         func_1BDC20
label_799d44:
    if (ctx->pc == 0x799D44u) {
        ctx->pc = 0x799D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D40u;
        // 0x799d44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D48u;
        goto label_799d48;
    }
    ctx->pc = 0x799D40u;
    SET_GPR_U32(ctx, 31, 0x799D48u);
    ctx->pc = 0x799D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D40u;
    // 0x799d44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x799D40u, 0x799D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D48u;
label_799d48:
    // 0x799d48: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799d4c:
    // 0x799d4c: 0xc0b5692  jal         func_2D5A48
label_799d50:
    if (ctx->pc == 0x799D50u) {
        ctx->pc = 0x799D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D4Cu;
        // 0x799d50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D54u;
        goto label_799d54;
    }
    ctx->pc = 0x799D4Cu;
    SET_GPR_U32(ctx, 31, 0x799D54u);
    ctx->pc = 0x799D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D4Cu;
    // 0x799d50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799D4Cu, 0x799D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D54u;
label_799d54:
    // 0x799d54: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x799d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_799d58:
    // 0x799d58: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x799d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_799d5c:
    // 0x799d5c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x799d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_799d60:
    // 0x799d60: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x799d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_799d64:
    // 0x799d64: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x799d64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799d68:
    // 0x799d68: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x799d68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_799d6c:
    // 0x799d6c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x799d6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799d70:
    // 0x799d70: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x799d70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_799d74:
    // 0x799d74: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x799d74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799d78:
    // 0x799d78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x799d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_799d7c:
    // 0x799d7c: 0x3e00008  jr          $ra
label_799d80:
    if (ctx->pc == 0x799D80u) {
        ctx->pc = 0x799D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D7Cu;
        // 0x799d80: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D84u;
        goto label_799d84;
    }
    ctx->pc = 0x799D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D7Cu;
        // 0x799d80: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D84u;
label_799d84:
    // 0x799d84: 0x0  nop
    ctx->pc = 0x799d84u;
    // NOP
    ctx->pc = 0x799d88u;
}
} // namespace gh_r408
