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

// Function: func_0019CA58
// Address: 0x19ca58 - 0x19cd80
void func_0019CA58_0x19ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019CA58_0x19ca58");
#endif

    switch (ctx->pc) {
        case 0x19ca58u: goto label_19ca58;
        case 0x19ca5cu: goto label_19ca5c;
        case 0x19ca60u: goto label_19ca60;
        case 0x19ca64u: goto label_19ca64;
        case 0x19ca68u: goto label_19ca68;
        case 0x19ca6cu: goto label_19ca6c;
        case 0x19ca70u: goto label_19ca70;
        case 0x19ca74u: goto label_19ca74;
        case 0x19ca78u: goto label_19ca78;
        case 0x19ca7cu: goto label_19ca7c;
        case 0x19ca80u: goto label_19ca80;
        case 0x19ca84u: goto label_19ca84;
        case 0x19ca88u: goto label_19ca88;
        case 0x19ca8cu: goto label_19ca8c;
        case 0x19ca90u: goto label_19ca90;
        case 0x19ca94u: goto label_19ca94;
        case 0x19ca98u: goto label_19ca98;
        case 0x19ca9cu: goto label_19ca9c;
        case 0x19caa0u: goto label_19caa0;
        case 0x19caa4u: goto label_19caa4;
        case 0x19caa8u: goto label_19caa8;
        case 0x19caacu: goto label_19caac;
        case 0x19cab0u: goto label_19cab0;
        case 0x19cab4u: goto label_19cab4;
        case 0x19cab8u: goto label_19cab8;
        case 0x19cabcu: goto label_19cabc;
        case 0x19cac0u: goto label_19cac0;
        case 0x19cac4u: goto label_19cac4;
        case 0x19cac8u: goto label_19cac8;
        case 0x19caccu: goto label_19cacc;
        case 0x19cad0u: goto label_19cad0;
        case 0x19cad4u: goto label_19cad4;
        case 0x19cad8u: goto label_19cad8;
        case 0x19cadcu: goto label_19cadc;
        case 0x19cae0u: goto label_19cae0;
        case 0x19cae4u: goto label_19cae4;
        case 0x19cae8u: goto label_19cae8;
        case 0x19caecu: goto label_19caec;
        case 0x19caf0u: goto label_19caf0;
        case 0x19caf4u: goto label_19caf4;
        case 0x19caf8u: goto label_19caf8;
        case 0x19cafcu: goto label_19cafc;
        case 0x19cb00u: goto label_19cb00;
        case 0x19cb04u: goto label_19cb04;
        case 0x19cb08u: goto label_19cb08;
        case 0x19cb0cu: goto label_19cb0c;
        case 0x19cb10u: goto label_19cb10;
        case 0x19cb14u: goto label_19cb14;
        case 0x19cb18u: goto label_19cb18;
        case 0x19cb1cu: goto label_19cb1c;
        case 0x19cb20u: goto label_19cb20;
        case 0x19cb24u: goto label_19cb24;
        case 0x19cb28u: goto label_19cb28;
        case 0x19cb2cu: goto label_19cb2c;
        case 0x19cb30u: goto label_19cb30;
        case 0x19cb34u: goto label_19cb34;
        case 0x19cb38u: goto label_19cb38;
        case 0x19cb3cu: goto label_19cb3c;
        case 0x19cb40u: goto label_19cb40;
        case 0x19cb44u: goto label_19cb44;
        case 0x19cb48u: goto label_19cb48;
        case 0x19cb4cu: goto label_19cb4c;
        case 0x19cb50u: goto label_19cb50;
        case 0x19cb54u: goto label_19cb54;
        case 0x19cb58u: goto label_19cb58;
        case 0x19cb5cu: goto label_19cb5c;
        case 0x19cb60u: goto label_19cb60;
        case 0x19cb64u: goto label_19cb64;
        case 0x19cb68u: goto label_19cb68;
        case 0x19cb6cu: goto label_19cb6c;
        case 0x19cb70u: goto label_19cb70;
        case 0x19cb74u: goto label_19cb74;
        case 0x19cb78u: goto label_19cb78;
        case 0x19cb7cu: goto label_19cb7c;
        case 0x19cb80u: goto label_19cb80;
        case 0x19cb84u: goto label_19cb84;
        case 0x19cb88u: goto label_19cb88;
        case 0x19cb8cu: goto label_19cb8c;
        case 0x19cb90u: goto label_19cb90;
        case 0x19cb94u: goto label_19cb94;
        case 0x19cb98u: goto label_19cb98;
        case 0x19cb9cu: goto label_19cb9c;
        case 0x19cba0u: goto label_19cba0;
        case 0x19cba4u: goto label_19cba4;
        case 0x19cba8u: goto label_19cba8;
        case 0x19cbacu: goto label_19cbac;
        case 0x19cbb0u: goto label_19cbb0;
        case 0x19cbb4u: goto label_19cbb4;
        case 0x19cbb8u: goto label_19cbb8;
        case 0x19cbbcu: goto label_19cbbc;
        case 0x19cbc0u: goto label_19cbc0;
        case 0x19cbc4u: goto label_19cbc4;
        case 0x19cbc8u: goto label_19cbc8;
        case 0x19cbccu: goto label_19cbcc;
        case 0x19cbd0u: goto label_19cbd0;
        case 0x19cbd4u: goto label_19cbd4;
        case 0x19cbd8u: goto label_19cbd8;
        case 0x19cbdcu: goto label_19cbdc;
        case 0x19cbe0u: goto label_19cbe0;
        case 0x19cbe4u: goto label_19cbe4;
        case 0x19cbe8u: goto label_19cbe8;
        case 0x19cbecu: goto label_19cbec;
        case 0x19cbf0u: goto label_19cbf0;
        case 0x19cbf4u: goto label_19cbf4;
        case 0x19cbf8u: goto label_19cbf8;
        case 0x19cbfcu: goto label_19cbfc;
        case 0x19cc00u: goto label_19cc00;
        case 0x19cc04u: goto label_19cc04;
        case 0x19cc08u: goto label_19cc08;
        case 0x19cc0cu: goto label_19cc0c;
        case 0x19cc10u: goto label_19cc10;
        case 0x19cc14u: goto label_19cc14;
        case 0x19cc18u: goto label_19cc18;
        case 0x19cc1cu: goto label_19cc1c;
        case 0x19cc20u: goto label_19cc20;
        case 0x19cc24u: goto label_19cc24;
        case 0x19cc28u: goto label_19cc28;
        case 0x19cc2cu: goto label_19cc2c;
        case 0x19cc30u: goto label_19cc30;
        case 0x19cc34u: goto label_19cc34;
        case 0x19cc38u: goto label_19cc38;
        case 0x19cc3cu: goto label_19cc3c;
        case 0x19cc40u: goto label_19cc40;
        case 0x19cc44u: goto label_19cc44;
        case 0x19cc48u: goto label_19cc48;
        case 0x19cc4cu: goto label_19cc4c;
        case 0x19cc50u: goto label_19cc50;
        case 0x19cc54u: goto label_19cc54;
        case 0x19cc58u: goto label_19cc58;
        case 0x19cc5cu: goto label_19cc5c;
        case 0x19cc60u: goto label_19cc60;
        case 0x19cc64u: goto label_19cc64;
        case 0x19cc68u: goto label_19cc68;
        case 0x19cc6cu: goto label_19cc6c;
        case 0x19cc70u: goto label_19cc70;
        case 0x19cc74u: goto label_19cc74;
        case 0x19cc78u: goto label_19cc78;
        case 0x19cc7cu: goto label_19cc7c;
        case 0x19cc80u: goto label_19cc80;
        case 0x19cc84u: goto label_19cc84;
        case 0x19cc88u: goto label_19cc88;
        case 0x19cc8cu: goto label_19cc8c;
        case 0x19cc90u: goto label_19cc90;
        case 0x19cc94u: goto label_19cc94;
        case 0x19cc98u: goto label_19cc98;
        case 0x19cc9cu: goto label_19cc9c;
        case 0x19cca0u: goto label_19cca0;
        case 0x19cca4u: goto label_19cca4;
        case 0x19cca8u: goto label_19cca8;
        case 0x19ccacu: goto label_19ccac;
        case 0x19ccb0u: goto label_19ccb0;
        case 0x19ccb4u: goto label_19ccb4;
        case 0x19ccb8u: goto label_19ccb8;
        case 0x19ccbcu: goto label_19ccbc;
        case 0x19ccc0u: goto label_19ccc0;
        case 0x19ccc4u: goto label_19ccc4;
        case 0x19ccc8u: goto label_19ccc8;
        case 0x19ccccu: goto label_19cccc;
        case 0x19ccd0u: goto label_19ccd0;
        case 0x19ccd4u: goto label_19ccd4;
        case 0x19ccd8u: goto label_19ccd8;
        case 0x19ccdcu: goto label_19ccdc;
        case 0x19cce0u: goto label_19cce0;
        case 0x19cce4u: goto label_19cce4;
        case 0x19cce8u: goto label_19cce8;
        case 0x19ccecu: goto label_19ccec;
        case 0x19ccf0u: goto label_19ccf0;
        case 0x19ccf4u: goto label_19ccf4;
        case 0x19ccf8u: goto label_19ccf8;
        case 0x19ccfcu: goto label_19ccfc;
        case 0x19cd00u: goto label_19cd00;
        case 0x19cd04u: goto label_19cd04;
        case 0x19cd08u: goto label_19cd08;
        case 0x19cd0cu: goto label_19cd0c;
        case 0x19cd10u: goto label_19cd10;
        case 0x19cd14u: goto label_19cd14;
        case 0x19cd18u: goto label_19cd18;
        case 0x19cd1cu: goto label_19cd1c;
        case 0x19cd20u: goto label_19cd20;
        case 0x19cd24u: goto label_19cd24;
        case 0x19cd28u: goto label_19cd28;
        case 0x19cd2cu: goto label_19cd2c;
        case 0x19cd30u: goto label_19cd30;
        case 0x19cd34u: goto label_19cd34;
        case 0x19cd38u: goto label_19cd38;
        case 0x19cd3cu: goto label_19cd3c;
        case 0x19cd40u: goto label_19cd40;
        case 0x19cd44u: goto label_19cd44;
        case 0x19cd48u: goto label_19cd48;
        case 0x19cd4cu: goto label_19cd4c;
        case 0x19cd50u: goto label_19cd50;
        case 0x19cd54u: goto label_19cd54;
        case 0x19cd58u: goto label_19cd58;
        case 0x19cd5cu: goto label_19cd5c;
        case 0x19cd60u: goto label_19cd60;
        case 0x19cd64u: goto label_19cd64;
        case 0x19cd68u: goto label_19cd68;
        case 0x19cd6cu: goto label_19cd6c;
        case 0x19cd70u: goto label_19cd70;
        case 0x19cd74u: goto label_19cd74;
        case 0x19cd78u: goto label_19cd78;
        case 0x19cd7cu: goto label_19cd7c;
        default: break;
    }

    ctx->pc = 0x19ca58u;

label_19ca58:
    // 0x19ca58: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x19ca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_19ca5c:
    // 0x19ca5c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x19ca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_19ca60:
    // 0x19ca60: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x19ca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_19ca64:
    // 0x19ca64: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19ca64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ca68:
    // 0x19ca68: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x19ca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_19ca6c:
    // 0x19ca6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ca6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ca70:
    // 0x19ca70: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x19ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_19ca74:
    // 0x19ca74: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x19ca74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_19ca78:
    // 0x19ca78: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x19ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_19ca7c:
    // 0x19ca7c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x19ca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_19ca80:
    // 0x19ca80: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x19ca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_19ca84:
    // 0x19ca84: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19ca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_19ca88:
    // 0x19ca88: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_19ca8c:
    // 0x19ca8c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x19ca8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_19ca90:
    // 0x19ca90: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x19ca90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_19ca94:
    // 0x19ca94: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x19ca94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_19ca98:
    // 0x19ca98: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_19ca9c:
    if (ctx->pc == 0x19CA9Cu) {
        ctx->pc = 0x19CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA98u;
        // 0x19ca9c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAA0u;
        goto label_19caa0;
    }
    ctx->pc = 0x19CA98u;
    {
        const bool branch_taken_0x19ca98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x19CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA98u;
        // 0x19ca9c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca98) {
            ctx->pc = 0x19CB74u;
            goto label_19cb74;
        }
    }
    ctx->pc = 0x19CAA0u;
label_19caa0:
    // 0x19caa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19caa4:
    if (ctx->pc == 0x19CAA4u) {
        ctx->pc = 0x19CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAA0u;
        // 0x19caa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAA8u;
        goto label_19caa8;
    }
    ctx->pc = 0x19CAA0u;
    {
        const bool branch_taken_0x19caa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAA0u;
        // 0x19caa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19caa0) {
            ctx->pc = 0x19CAB8u;
            goto label_19cab8;
        }
    }
    ctx->pc = 0x19CAA8u;
label_19caa8:
    // 0x19caa8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_19caac:
    if (ctx->pc == 0x19CAACu) {
        ctx->pc = 0x19CAB0u;
        goto label_19cab0;
    }
    ctx->pc = 0x19CAA8u;
    {
        const bool branch_taken_0x19caa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19caa8) {
            ctx->pc = 0x19CAD0u;
            goto label_19cad0;
        }
    }
    ctx->pc = 0x19CAB0u;
label_19cab0:
    // 0x19cab0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_19cab4:
    if (ctx->pc == 0x19CAB4u) {
        ctx->pc = 0x19CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAB0u;
        // 0x19cab4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAB8u;
        goto label_19cab8;
    }
    ctx->pc = 0x19CAB0u;
    {
        const bool branch_taken_0x19cab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAB0u;
        // 0x19cab4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cab0) {
            ctx->pc = 0x19CBF0u;
            goto label_19cbf0;
        }
    }
    ctx->pc = 0x19CAB8u;
label_19cab8:
    // 0x19cab8: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_19cabc:
    if (ctx->pc == 0x19CABCu) {
        ctx->pc = 0x19CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAB8u;
        // 0x19cabc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAC0u;
        goto label_19cac0;
    }
    ctx->pc = 0x19CAB8u;
    {
        const bool branch_taken_0x19cab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAB8u;
        // 0x19cabc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cab8) {
            ctx->pc = 0x19CB9Cu;
            goto label_19cb9c;
        }
    }
    ctx->pc = 0x19CAC0u;
label_19cac0:
    // 0x19cac0: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_19cac4:
    if (ctx->pc == 0x19CAC4u) {
        ctx->pc = 0x19CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAC0u;
        // 0x19cac4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAC8u;
        goto label_19cac8;
    }
    ctx->pc = 0x19CAC0u;
    {
        const bool branch_taken_0x19cac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19cac0) {
            ctx->pc = 0x19CAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CAC0u;
            // 0x19cac4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CBE0u;
            goto label_19cbe0;
        }
    }
    ctx->pc = 0x19CAC8u;
label_19cac8:
    // 0x19cac8: 0x10000049  b           . + 4 + (0x49 << 2)
label_19cacc:
    if (ctx->pc == 0x19CACCu) {
        ctx->pc = 0x19CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAC8u;
        // 0x19cacc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAD0u;
        goto label_19cad0;
    }
    ctx->pc = 0x19CAC8u;
    {
        const bool branch_taken_0x19cac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAC8u;
        // 0x19cacc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cac8) {
            ctx->pc = 0x19CBF0u;
            goto label_19cbf0;
        }
    }
    ctx->pc = 0x19CAD0u;
label_19cad0:
    // 0x19cad0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x19cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_19cad4:
    // 0x19cad4: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x19cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_19cad8:
    // 0x19cad8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x19cad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_19cadc:
    // 0x19cadc: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x19cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_19cae0:
    // 0x19cae0: 0x40f809  jalr        $v0
label_19cae4:
    if (ctx->pc == 0x19CAE4u) {
        ctx->pc = 0x19CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAE0u;
        // 0x19cae4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAE8u;
        goto label_19cae8;
    }
    ctx->pc = 0x19CAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19CAE8u);
        ctx->pc = 0x19CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAE0u;
        // 0x19cae4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CAE0u, 0x19CAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CAE8u;
label_19cae8:
    // 0x19cae8: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_19caec:
    if (ctx->pc == 0x19CAECu) {
        ctx->pc = 0x19CAF0u;
        goto label_19caf0;
    }
    ctx->pc = 0x19CAE8u;
    {
        const bool branch_taken_0x19cae8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x19cae8) {
            ctx->pc = 0x19CB08u;
            goto label_19cb08;
        }
    }
    ctx->pc = 0x19CAF0u;
label_19caf0:
    // 0x19caf0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19caf4:
    // 0x19caf4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19caf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19caf8:
    // 0x19caf8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cafc:
    // 0x19cafc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19cafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19cb00:
    // 0x19cb00: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19cb04:
    // 0x19cb04: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19cb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19cb08:
    // 0x19cb08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19cb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19cb0c:
    // 0x19cb0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19cb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19cb10:
    // 0x19cb10: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19cb10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19cb14:
    // 0x19cb14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19cb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb18:
    // 0x19cb18: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x19cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_19cb1c:
    // 0x19cb1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb20:
    // 0x19cb20: 0xc0c1a0e  jal         func_306838
label_19cb24:
    if (ctx->pc == 0x19CB24u) {
        ctx->pc = 0x19CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB20u;
        // 0x19cb24: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB28u;
        goto label_19cb28;
    }
    ctx->pc = 0x19CB20u;
    SET_GPR_U32(ctx, 31, 0x19CB28u);
    ctx->pc = 0x19CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB20u;
    // 0x19cb24: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x19CB20u, 0x19CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB28u;
label_19cb28:
    // 0x19cb28: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x19cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_19cb2c:
    // 0x19cb2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19cb2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb30:
    // 0x19cb30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19cb30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb34:
    // 0x19cb34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19cb34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb38:
    // 0x19cb38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19cb3c:
    // 0x19cb3c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19cb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19cb40:
    // 0x19cb40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19cb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19cb44:
    // 0x19cb44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19cb44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb48:
    // 0x19cb48: 0xc0b2e92  jal         func_2CBA48
label_19cb4c:
    if (ctx->pc == 0x19CB4Cu) {
        ctx->pc = 0x19CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB48u;
        // 0x19cb4c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB50u;
        goto label_19cb50;
    }
    ctx->pc = 0x19CB48u;
    SET_GPR_U32(ctx, 31, 0x19CB50u);
    ctx->pc = 0x19CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB48u;
    // 0x19cb4c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x19CB48u, 0x19CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB50u;
label_19cb50:
    // 0x19cb50: 0xc0673f8  jal         func_19CFE0
label_19cb54:
    if (ctx->pc == 0x19CB54u) {
        ctx->pc = 0x19CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB50u;
        // 0x19cb54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB58u;
        goto label_19cb58;
    }
    ctx->pc = 0x19CB50u;
    SET_GPR_U32(ctx, 31, 0x19CB58u);
    ctx->pc = 0x19CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB50u;
    // 0x19cb54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CFE0u, 0x19CB50u, 0x19CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB58u;
label_19cb58:
    // 0x19cb58: 0xc06de42  jal         func_1B7908
label_19cb5c:
    if (ctx->pc == 0x19CB5Cu) {
        ctx->pc = 0x19CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB58u;
        // 0x19cb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB60u;
        goto label_19cb60;
    }
    ctx->pc = 0x19CB58u;
    SET_GPR_U32(ctx, 31, 0x19CB60u);
    ctx->pc = 0x19CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB58u;
    // 0x19cb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x19CB58u, 0x19CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB60u;
label_19cb60:
    // 0x19cb60: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19cb64:
    // 0x19cb64: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x19cb64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_19cb68:
    // 0x19cb68: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x19cb68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_19cb6c:
    // 0x19cb6c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19cb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_19cb70:
    // 0x19cb70: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x19cb70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_19cb74:
    // 0x19cb74: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x19cb74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_19cb78:
    // 0x19cb78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19cb7c:
    // 0x19cb7c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19cb80:
    // 0x19cb80: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_19cb84:
    if (ctx->pc == 0x19CB84u) {
        ctx->pc = 0x19CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB80u;
        // 0x19cb84: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB88u;
        goto label_19cb88;
    }
    ctx->pc = 0x19CB80u;
    {
        const bool branch_taken_0x19cb80 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB80u;
        // 0x19cb84: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb80) {
            ctx->pc = 0x19CBECu;
            goto label_19cbec;
        }
    }
    ctx->pc = 0x19CB88u;
label_19cb88:
    // 0x19cb88: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_19cb8c:
    // 0x19cb8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19cb90:
    // 0x19cb90: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x19cb90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_19cb94:
    // 0x19cb94: 0x10000013  b           . + 4 + (0x13 << 2)
label_19cb98:
    if (ctx->pc == 0x19CB98u) {
        ctx->pc = 0x19CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB94u;
        // 0x19cb98: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB9Cu;
        goto label_19cb9c;
    }
    ctx->pc = 0x19CB94u;
    {
        const bool branch_taken_0x19cb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB94u;
        // 0x19cb98: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb94) {
            ctx->pc = 0x19CBE4u;
            goto label_19cbe4;
        }
    }
    ctx->pc = 0x19CB9Cu;
label_19cb9c:
    // 0x19cb9c: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x19cb9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_19cba0:
    // 0x19cba0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x19cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_19cba4:
    // 0x19cba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19cba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19cba8:
    // 0x19cba8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19cbac:
    // 0x19cbac: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19cbb0:
    // 0x19cbb0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x19cbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_19cbb4:
    // 0x19cbb4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x19cbb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_19cbb8:
    // 0x19cbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19cbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cbbc:
    // 0x19cbbc: 0x0  nop
    ctx->pc = 0x19cbbcu;
    // NOP
label_19cbc0:
    // 0x19cbc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cbc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cbc4:
    // 0x19cbc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19cbc4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_19cbc8:
    // 0x19cbc8: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_19cbcc:
    if (ctx->pc == 0x19CBCCu) {
        ctx->pc = 0x19CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBC8u;
        // 0x19cbcc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBD0u;
        goto label_19cbd0;
    }
    ctx->pc = 0x19CBC8u;
    {
        const bool branch_taken_0x19cbc8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBC8u;
        // 0x19cbcc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbc8) {
            ctx->pc = 0x19CBECu;
            goto label_19cbec;
        }
    }
    ctx->pc = 0x19CBD0u;
label_19cbd0:
    // 0x19cbd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19cbd4:
    // 0x19cbd4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19cbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_19cbd8:
    // 0x19cbd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_19cbdc:
    if (ctx->pc == 0x19CBDCu) {
        ctx->pc = 0x19CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBD8u;
        // 0x19cbdc: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBE0u;
        goto label_19cbe0;
    }
    ctx->pc = 0x19CBD8u;
    {
        const bool branch_taken_0x19cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBD8u;
        // 0x19cbdc: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbd8) {
            ctx->pc = 0x19CBE8u;
            goto label_19cbe8;
        }
    }
    ctx->pc = 0x19CBE0u;
label_19cbe0:
    // 0x19cbe0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x19cbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_19cbe4:
    // 0x19cbe4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19cbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_19cbe8:
    // 0x19cbe8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x19cbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_19cbec:
    // 0x19cbec: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19cbecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_19cbf0:
    // 0x19cbf0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x19cbf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cbf4:
    // 0x19cbf4: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_19cbf8:
    if (ctx->pc == 0x19CBF8u) {
        ctx->pc = 0x19CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBF4u;
        // 0x19cbf8: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBFCu;
        goto label_19cbfc;
    }
    ctx->pc = 0x19CBF4u;
    {
        const bool branch_taken_0x19cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x19CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBF4u;
        // 0x19cbf8: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbf4) {
            ctx->pc = 0x19CD44u;
            goto label_19cd44;
        }
    }
    ctx->pc = 0x19CBFCu;
label_19cbfc:
    // 0x19cbfc: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x19cbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_19cc00:
    // 0x19cc00: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19cc00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_19cc04:
    // 0x19cc04: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19cc08:
    // 0x19cc08: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x19cc08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_19cc0c:
    // 0x19cc0c: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x19cc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_19cc10:
    // 0x19cc10: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x19cc10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_19cc14:
    // 0x19cc14: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x19cc14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_19cc18:
    // 0x19cc18: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x19cc18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_19cc1c:
    // 0x19cc1c: 0x0  nop
    ctx->pc = 0x19cc1cu;
    // NOP
label_19cc20:
    // 0x19cc20: 0xc05ce40  jal         func_173900
label_19cc24:
    if (ctx->pc == 0x19CC24u) {
        ctx->pc = 0x19CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC20u;
        // 0x19cc24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC28u;
        goto label_19cc28;
    }
    ctx->pc = 0x19CC20u;
    SET_GPR_U32(ctx, 31, 0x19CC28u);
    ctx->pc = 0x19CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC20u;
    // 0x19cc24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x19CC20u, 0x19CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC28u;
label_19cc28:
    // 0x19cc28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cc2c:
    // 0x19cc2c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_19cc30:
    if (ctx->pc == 0x19CC30u) {
        ctx->pc = 0x19CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC2Cu;
        // 0x19cc30: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC34u;
        goto label_19cc34;
    }
    ctx->pc = 0x19CC2Cu;
    {
        const bool branch_taken_0x19cc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19cc2c) {
            ctx->pc = 0x19CC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CC2Cu;
            // 0x19cc30: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CD1Cu;
            goto label_19cd1c;
        }
    }
    ctx->pc = 0x19CC34u;
label_19cc34:
    // 0x19cc34: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x19cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_19cc38:
    // 0x19cc38: 0xc0a4bd4  jal         func_292F50
label_19cc3c:
    if (ctx->pc == 0x19CC3Cu) {
        ctx->pc = 0x19CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC38u;
        // 0x19cc3c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC40u;
        goto label_19cc40;
    }
    ctx->pc = 0x19CC38u;
    SET_GPR_U32(ctx, 31, 0x19CC40u);
    ctx->pc = 0x19CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC38u;
    // 0x19cc3c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x19CC38u, 0x19CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC40u;
label_19cc40:
    // 0x19cc40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19cc40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_19cc44:
    // 0x19cc44: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x19cc44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_19cc48:
    // 0x19cc48: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19cc4c:
    // 0x19cc4c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19cc4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19cc50:
    // 0x19cc50: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19cc50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19cc54:
    // 0x19cc54: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19cc54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19cc58:
    // 0x19cc58: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19cc58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19cc5c:
    // 0x19cc5c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19cc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19cc60:
    // 0x19cc60: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x19cc60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_19cc64:
    // 0x19cc64: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19cc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_19cc68:
    // 0x19cc68: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x19cc68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_19cc6c:
    // 0x19cc6c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x19cc6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_19cc70:
    // 0x19cc70: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x19cc70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19cc74:
    // 0x19cc74: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x19cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_19cc78:
    // 0x19cc78: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x19cc78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_19cc7c:
    // 0x19cc7c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19cc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19cc80:
    // 0x19cc80: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19cc80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19cc84:
    // 0x19cc84: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19cc84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19cc88:
    // 0x19cc88: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19cc88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19cc8c:
    // 0x19cc8c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19cc8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19cc90:
    // 0x19cc90: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19cc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19cc94:
    // 0x19cc94: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x19cc94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_19cc98:
    // 0x19cc98: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_19cc9c:
    // 0x19cc9c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19cc9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_19cca0:
    // 0x19cca0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x19cca0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_19cca4:
    // 0x19cca4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x19cca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19cca8:
    // 0x19cca8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19cca8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_19ccac:
    // 0x19ccac: 0xc07df68  jal         func_1F7DA0
label_19ccb0:
    if (ctx->pc == 0x19CCB0u) {
        ctx->pc = 0x19CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCACu;
        // 0x19ccb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCB4u;
        goto label_19ccb4;
    }
    ctx->pc = 0x19CCACu;
    SET_GPR_U32(ctx, 31, 0x19CCB4u);
    ctx->pc = 0x19CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCACu;
    // 0x19ccb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x19CCACu, 0x19CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCB4u;
label_19ccb4:
    // 0x19ccb4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19ccb8:
    // 0x19ccb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19ccb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ccbc:
    // 0x19ccbc: 0xc051dca  jal         func_147728
label_19ccc0:
    if (ctx->pc == 0x19CCC0u) {
        ctx->pc = 0x19CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCBCu;
        // 0x19ccc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCC4u;
        goto label_19ccc4;
    }
    ctx->pc = 0x19CCBCu;
    SET_GPR_U32(ctx, 31, 0x19CCC4u);
    ctx->pc = 0x19CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCBCu;
    // 0x19ccc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x19CCBCu, 0x19CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCC4u;
label_19ccc4:
    // 0x19ccc4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19ccc8:
    // 0x19ccc8: 0xc051f10  jal         func_147C40
label_19cccc:
    if (ctx->pc == 0x19CCCCu) {
        ctx->pc = 0x19CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCC8u;
        // 0x19cccc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCD0u;
        goto label_19ccd0;
    }
    ctx->pc = 0x19CCC8u;
    SET_GPR_U32(ctx, 31, 0x19CCD0u);
    ctx->pc = 0x19CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCC8u;
    // 0x19cccc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x19CCC8u, 0x19CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCD0u;
label_19ccd0:
    // 0x19ccd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19ccd4:
    // 0x19ccd4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x19ccd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19ccd8:
    // 0x19ccd8: 0xc051efe  jal         func_147BF8
label_19ccdc:
    if (ctx->pc == 0x19CCDCu) {
        ctx->pc = 0x19CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCD8u;
        // 0x19ccdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCE0u;
        goto label_19cce0;
    }
    ctx->pc = 0x19CCD8u;
    SET_GPR_U32(ctx, 31, 0x19CCE0u);
    ctx->pc = 0x19CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCD8u;
    // 0x19ccdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x19CCD8u, 0x19CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCE0u;
label_19cce0:
    // 0x19cce0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_19cce4:
    // 0x19cce4: 0xc051d4a  jal         func_147528
label_19cce8:
    if (ctx->pc == 0x19CCE8u) {
        ctx->pc = 0x19CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCE4u;
        // 0x19cce8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCECu;
        goto label_19ccec;
    }
    ctx->pc = 0x19CCE4u;
    SET_GPR_U32(ctx, 31, 0x19CCECu);
    ctx->pc = 0x19CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCE4u;
    // 0x19cce8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x19CCE4u, 0x19CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCECu;
label_19ccec:
    // 0x19ccec: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x19ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ccf0:
    // 0x19ccf0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x19ccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ccf4:
    // 0x19ccf4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19ccf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_19ccf8:
    // 0x19ccf8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19ccf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19ccfc:
    // 0x19ccfc: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x19ccfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cd00:
    // 0x19cd00: 0x0  nop
    ctx->pc = 0x19cd00u;
    // NOP
label_19cd04:
    // 0x19cd04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19cd08:
    if (ctx->pc == 0x19CD08u) {
        ctx->pc = 0x19CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD04u;
        // 0x19cd08: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD0Cu;
        goto label_19cd0c;
    }
    ctx->pc = 0x19CD04u;
    {
        const bool branch_taken_0x19cd04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD04u;
        // 0x19cd08: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd04) {
            ctx->pc = 0x19CD18u;
            goto label_19cd18;
        }
    }
    ctx->pc = 0x19CD0Cu;
label_19cd0c:
    // 0x19cd0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19cd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19cd10:
    // 0x19cd10: 0xc05bd90  jal         func_16F640
label_19cd14:
    if (ctx->pc == 0x19CD14u) {
        ctx->pc = 0x19CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD10u;
        // 0x19cd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD18u;
        goto label_19cd18;
    }
    ctx->pc = 0x19CD10u;
    SET_GPR_U32(ctx, 31, 0x19CD18u);
    ctx->pc = 0x19CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD10u;
    // 0x19cd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19CD10u, 0x19CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD18u;
label_19cd18:
    // 0x19cd18: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19cd18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_19cd1c:
    // 0x19cd1c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x19cd1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_19cd20:
    // 0x19cd20: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x19cd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_19cd24:
    // 0x19cd24: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x19cd24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_19cd28:
    // 0x19cd28: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x19cd28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_19cd2c:
    // 0x19cd2c: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x19cd2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_19cd30:
    // 0x19cd30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19cd34:
    if (ctx->pc == 0x19CD34u) {
        ctx->pc = 0x19CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD30u;
        // 0x19cd34: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD38u;
        goto label_19cd38;
    }
    ctx->pc = 0x19CD30u;
    {
        const bool branch_taken_0x19cd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD30u;
        // 0x19cd34: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd30) {
            ctx->pc = 0x19CD44u;
            goto label_19cd44;
        }
    }
    ctx->pc = 0x19CD38u;
label_19cd38:
    // 0x19cd38: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19cd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_19cd3c:
    // 0x19cd3c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_19cd40:
    if (ctx->pc == 0x19CD40u) {
        ctx->pc = 0x19CD44u;
        goto label_19cd44;
    }
    ctx->pc = 0x19CD3Cu;
    {
        const bool branch_taken_0x19cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x19cd3c) {
            ctx->pc = 0x19CC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cc20;
        }
    }
    ctx->pc = 0x19CD44u;
label_19cd44:
    // 0x19cd44: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x19cd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_19cd48:
    // 0x19cd48: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x19cd48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_19cd4c:
    // 0x19cd4c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x19cd4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_19cd50:
    // 0x19cd50: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x19cd50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_19cd54:
    // 0x19cd54: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x19cd54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_19cd58:
    // 0x19cd58: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x19cd58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19cd5c:
    // 0x19cd5c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x19cd5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19cd60:
    // 0x19cd60: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x19cd60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19cd64:
    // 0x19cd64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19cd64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19cd68:
    // 0x19cd68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19cd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19cd6c:
    // 0x19cd6c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x19cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19cd70:
    // 0x19cd70: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x19cd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19cd74:
    // 0x19cd74: 0x3e00008  jr          $ra
label_19cd78:
    if (ctx->pc == 0x19CD78u) {
        ctx->pc = 0x19CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD74u;
        // 0x19cd78: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD7Cu;
        goto label_19cd7c;
    }
    ctx->pc = 0x19CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD74u;
        // 0x19cd78: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD7Cu;
label_19cd7c:
    // 0x19cd7c: 0x0  nop
    ctx->pc = 0x19cd7cu;
    // NOP
    ctx->pc = 0x19cd80u;
}
