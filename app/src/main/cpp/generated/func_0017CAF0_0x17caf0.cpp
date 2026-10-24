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

// Function: func_0017CAF0
// Address: 0x17caf0 - 0x17ce18
void func_0017CAF0_0x17caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017CAF0_0x17caf0");
#endif

    switch (ctx->pc) {
        case 0x17caf0u: goto label_17caf0;
        case 0x17caf4u: goto label_17caf4;
        case 0x17caf8u: goto label_17caf8;
        case 0x17cafcu: goto label_17cafc;
        case 0x17cb00u: goto label_17cb00;
        case 0x17cb04u: goto label_17cb04;
        case 0x17cb08u: goto label_17cb08;
        case 0x17cb0cu: goto label_17cb0c;
        case 0x17cb10u: goto label_17cb10;
        case 0x17cb14u: goto label_17cb14;
        case 0x17cb18u: goto label_17cb18;
        case 0x17cb1cu: goto label_17cb1c;
        case 0x17cb20u: goto label_17cb20;
        case 0x17cb24u: goto label_17cb24;
        case 0x17cb28u: goto label_17cb28;
        case 0x17cb2cu: goto label_17cb2c;
        case 0x17cb30u: goto label_17cb30;
        case 0x17cb34u: goto label_17cb34;
        case 0x17cb38u: goto label_17cb38;
        case 0x17cb3cu: goto label_17cb3c;
        case 0x17cb40u: goto label_17cb40;
        case 0x17cb44u: goto label_17cb44;
        case 0x17cb48u: goto label_17cb48;
        case 0x17cb4cu: goto label_17cb4c;
        case 0x17cb50u: goto label_17cb50;
        case 0x17cb54u: goto label_17cb54;
        case 0x17cb58u: goto label_17cb58;
        case 0x17cb5cu: goto label_17cb5c;
        case 0x17cb60u: goto label_17cb60;
        case 0x17cb64u: goto label_17cb64;
        case 0x17cb68u: goto label_17cb68;
        case 0x17cb6cu: goto label_17cb6c;
        case 0x17cb70u: goto label_17cb70;
        case 0x17cb74u: goto label_17cb74;
        case 0x17cb78u: goto label_17cb78;
        case 0x17cb7cu: goto label_17cb7c;
        case 0x17cb80u: goto label_17cb80;
        case 0x17cb84u: goto label_17cb84;
        case 0x17cb88u: goto label_17cb88;
        case 0x17cb8cu: goto label_17cb8c;
        case 0x17cb90u: goto label_17cb90;
        case 0x17cb94u: goto label_17cb94;
        case 0x17cb98u: goto label_17cb98;
        case 0x17cb9cu: goto label_17cb9c;
        case 0x17cba0u: goto label_17cba0;
        case 0x17cba4u: goto label_17cba4;
        case 0x17cba8u: goto label_17cba8;
        case 0x17cbacu: goto label_17cbac;
        case 0x17cbb0u: goto label_17cbb0;
        case 0x17cbb4u: goto label_17cbb4;
        case 0x17cbb8u: goto label_17cbb8;
        case 0x17cbbcu: goto label_17cbbc;
        case 0x17cbc0u: goto label_17cbc0;
        case 0x17cbc4u: goto label_17cbc4;
        case 0x17cbc8u: goto label_17cbc8;
        case 0x17cbccu: goto label_17cbcc;
        case 0x17cbd0u: goto label_17cbd0;
        case 0x17cbd4u: goto label_17cbd4;
        case 0x17cbd8u: goto label_17cbd8;
        case 0x17cbdcu: goto label_17cbdc;
        case 0x17cbe0u: goto label_17cbe0;
        case 0x17cbe4u: goto label_17cbe4;
        case 0x17cbe8u: goto label_17cbe8;
        case 0x17cbecu: goto label_17cbec;
        case 0x17cbf0u: goto label_17cbf0;
        case 0x17cbf4u: goto label_17cbf4;
        case 0x17cbf8u: goto label_17cbf8;
        case 0x17cbfcu: goto label_17cbfc;
        case 0x17cc00u: goto label_17cc00;
        case 0x17cc04u: goto label_17cc04;
        case 0x17cc08u: goto label_17cc08;
        case 0x17cc0cu: goto label_17cc0c;
        case 0x17cc10u: goto label_17cc10;
        case 0x17cc14u: goto label_17cc14;
        case 0x17cc18u: goto label_17cc18;
        case 0x17cc1cu: goto label_17cc1c;
        case 0x17cc20u: goto label_17cc20;
        case 0x17cc24u: goto label_17cc24;
        case 0x17cc28u: goto label_17cc28;
        case 0x17cc2cu: goto label_17cc2c;
        case 0x17cc30u: goto label_17cc30;
        case 0x17cc34u: goto label_17cc34;
        case 0x17cc38u: goto label_17cc38;
        case 0x17cc3cu: goto label_17cc3c;
        case 0x17cc40u: goto label_17cc40;
        case 0x17cc44u: goto label_17cc44;
        case 0x17cc48u: goto label_17cc48;
        case 0x17cc4cu: goto label_17cc4c;
        case 0x17cc50u: goto label_17cc50;
        case 0x17cc54u: goto label_17cc54;
        case 0x17cc58u: goto label_17cc58;
        case 0x17cc5cu: goto label_17cc5c;
        case 0x17cc60u: goto label_17cc60;
        case 0x17cc64u: goto label_17cc64;
        case 0x17cc68u: goto label_17cc68;
        case 0x17cc6cu: goto label_17cc6c;
        case 0x17cc70u: goto label_17cc70;
        case 0x17cc74u: goto label_17cc74;
        case 0x17cc78u: goto label_17cc78;
        case 0x17cc7cu: goto label_17cc7c;
        case 0x17cc80u: goto label_17cc80;
        case 0x17cc84u: goto label_17cc84;
        case 0x17cc88u: goto label_17cc88;
        case 0x17cc8cu: goto label_17cc8c;
        case 0x17cc90u: goto label_17cc90;
        case 0x17cc94u: goto label_17cc94;
        case 0x17cc98u: goto label_17cc98;
        case 0x17cc9cu: goto label_17cc9c;
        case 0x17cca0u: goto label_17cca0;
        case 0x17cca4u: goto label_17cca4;
        case 0x17cca8u: goto label_17cca8;
        case 0x17ccacu: goto label_17ccac;
        case 0x17ccb0u: goto label_17ccb0;
        case 0x17ccb4u: goto label_17ccb4;
        case 0x17ccb8u: goto label_17ccb8;
        case 0x17ccbcu: goto label_17ccbc;
        case 0x17ccc0u: goto label_17ccc0;
        case 0x17ccc4u: goto label_17ccc4;
        case 0x17ccc8u: goto label_17ccc8;
        case 0x17ccccu: goto label_17cccc;
        case 0x17ccd0u: goto label_17ccd0;
        case 0x17ccd4u: goto label_17ccd4;
        case 0x17ccd8u: goto label_17ccd8;
        case 0x17ccdcu: goto label_17ccdc;
        case 0x17cce0u: goto label_17cce0;
        case 0x17cce4u: goto label_17cce4;
        case 0x17cce8u: goto label_17cce8;
        case 0x17ccecu: goto label_17ccec;
        case 0x17ccf0u: goto label_17ccf0;
        case 0x17ccf4u: goto label_17ccf4;
        case 0x17ccf8u: goto label_17ccf8;
        case 0x17ccfcu: goto label_17ccfc;
        case 0x17cd00u: goto label_17cd00;
        case 0x17cd04u: goto label_17cd04;
        case 0x17cd08u: goto label_17cd08;
        case 0x17cd0cu: goto label_17cd0c;
        case 0x17cd10u: goto label_17cd10;
        case 0x17cd14u: goto label_17cd14;
        case 0x17cd18u: goto label_17cd18;
        case 0x17cd1cu: goto label_17cd1c;
        case 0x17cd20u: goto label_17cd20;
        case 0x17cd24u: goto label_17cd24;
        case 0x17cd28u: goto label_17cd28;
        case 0x17cd2cu: goto label_17cd2c;
        case 0x17cd30u: goto label_17cd30;
        case 0x17cd34u: goto label_17cd34;
        case 0x17cd38u: goto label_17cd38;
        case 0x17cd3cu: goto label_17cd3c;
        case 0x17cd40u: goto label_17cd40;
        case 0x17cd44u: goto label_17cd44;
        case 0x17cd48u: goto label_17cd48;
        case 0x17cd4cu: goto label_17cd4c;
        case 0x17cd50u: goto label_17cd50;
        case 0x17cd54u: goto label_17cd54;
        case 0x17cd58u: goto label_17cd58;
        case 0x17cd5cu: goto label_17cd5c;
        case 0x17cd60u: goto label_17cd60;
        case 0x17cd64u: goto label_17cd64;
        case 0x17cd68u: goto label_17cd68;
        case 0x17cd6cu: goto label_17cd6c;
        case 0x17cd70u: goto label_17cd70;
        case 0x17cd74u: goto label_17cd74;
        case 0x17cd78u: goto label_17cd78;
        case 0x17cd7cu: goto label_17cd7c;
        case 0x17cd80u: goto label_17cd80;
        case 0x17cd84u: goto label_17cd84;
        case 0x17cd88u: goto label_17cd88;
        case 0x17cd8cu: goto label_17cd8c;
        case 0x17cd90u: goto label_17cd90;
        case 0x17cd94u: goto label_17cd94;
        case 0x17cd98u: goto label_17cd98;
        case 0x17cd9cu: goto label_17cd9c;
        case 0x17cda0u: goto label_17cda0;
        case 0x17cda4u: goto label_17cda4;
        case 0x17cda8u: goto label_17cda8;
        case 0x17cdacu: goto label_17cdac;
        case 0x17cdb0u: goto label_17cdb0;
        case 0x17cdb4u: goto label_17cdb4;
        case 0x17cdb8u: goto label_17cdb8;
        case 0x17cdbcu: goto label_17cdbc;
        case 0x17cdc0u: goto label_17cdc0;
        case 0x17cdc4u: goto label_17cdc4;
        case 0x17cdc8u: goto label_17cdc8;
        case 0x17cdccu: goto label_17cdcc;
        case 0x17cdd0u: goto label_17cdd0;
        case 0x17cdd4u: goto label_17cdd4;
        case 0x17cdd8u: goto label_17cdd8;
        case 0x17cddcu: goto label_17cddc;
        case 0x17cde0u: goto label_17cde0;
        case 0x17cde4u: goto label_17cde4;
        case 0x17cde8u: goto label_17cde8;
        case 0x17cdecu: goto label_17cdec;
        case 0x17cdf0u: goto label_17cdf0;
        case 0x17cdf4u: goto label_17cdf4;
        case 0x17cdf8u: goto label_17cdf8;
        case 0x17cdfcu: goto label_17cdfc;
        case 0x17ce00u: goto label_17ce00;
        case 0x17ce04u: goto label_17ce04;
        case 0x17ce08u: goto label_17ce08;
        case 0x17ce0cu: goto label_17ce0c;
        case 0x17ce10u: goto label_17ce10;
        case 0x17ce14u: goto label_17ce14;
        default: break;
    }

    ctx->pc = 0x17caf0u;

label_17caf0:
    // 0x17caf0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x17caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_17caf4:
    // 0x17caf4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x17caf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_17caf8:
    // 0x17caf8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x17caf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_17cafc:
    // 0x17cafc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17cafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17cb00:
    // 0x17cb00: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x17cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_17cb04:
    // 0x17cb04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17cb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17cb08:
    // 0x17cb08: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x17cb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_17cb0c:
    // 0x17cb0c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x17cb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_17cb10:
    // 0x17cb10: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x17cb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_17cb14:
    // 0x17cb14: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x17cb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_17cb18:
    // 0x17cb18: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x17cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_17cb1c:
    // 0x17cb1c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17cb20:
    // 0x17cb20: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_17cb24:
    // 0x17cb24: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x17cb24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_17cb28:
    // 0x17cb28: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x17cb28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_17cb2c:
    // 0x17cb2c: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17cb2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_17cb30:
    // 0x17cb30: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_17cb34:
    if (ctx->pc == 0x17CB34u) {
        ctx->pc = 0x17CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB30u;
        // 0x17cb34: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CB38u;
        goto label_17cb38;
    }
    ctx->pc = 0x17CB30u;
    {
        const bool branch_taken_0x17cb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x17CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB30u;
        // 0x17cb34: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb30) {
            ctx->pc = 0x17CC0Cu;
            goto label_17cc0c;
        }
    }
    ctx->pc = 0x17CB38u;
label_17cb38:
    // 0x17cb38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17cb3c:
    if (ctx->pc == 0x17CB3Cu) {
        ctx->pc = 0x17CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB38u;
        // 0x17cb3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CB40u;
        goto label_17cb40;
    }
    ctx->pc = 0x17CB38u;
    {
        const bool branch_taken_0x17cb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB38u;
        // 0x17cb3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb38) {
            ctx->pc = 0x17CB50u;
            goto label_17cb50;
        }
    }
    ctx->pc = 0x17CB40u;
label_17cb40:
    // 0x17cb40: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_17cb44:
    if (ctx->pc == 0x17CB44u) {
        ctx->pc = 0x17CB48u;
        goto label_17cb48;
    }
    ctx->pc = 0x17CB40u;
    {
        const bool branch_taken_0x17cb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cb40) {
            ctx->pc = 0x17CB68u;
            goto label_17cb68;
        }
    }
    ctx->pc = 0x17CB48u;
label_17cb48:
    // 0x17cb48: 0x1000004f  b           . + 4 + (0x4F << 2)
label_17cb4c:
    if (ctx->pc == 0x17CB4Cu) {
        ctx->pc = 0x17CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB48u;
        // 0x17cb4c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CB50u;
        goto label_17cb50;
    }
    ctx->pc = 0x17CB48u;
    {
        const bool branch_taken_0x17cb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB48u;
        // 0x17cb4c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb48) {
            ctx->pc = 0x17CC88u;
            goto label_17cc88;
        }
    }
    ctx->pc = 0x17CB50u;
label_17cb50:
    // 0x17cb50: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_17cb54:
    if (ctx->pc == 0x17CB54u) {
        ctx->pc = 0x17CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB50u;
        // 0x17cb54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CB58u;
        goto label_17cb58;
    }
    ctx->pc = 0x17CB50u;
    {
        const bool branch_taken_0x17cb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB50u;
        // 0x17cb54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb50) {
            ctx->pc = 0x17CC34u;
            goto label_17cc34;
        }
    }
    ctx->pc = 0x17CB58u;
label_17cb58:
    // 0x17cb58: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_17cb5c:
    if (ctx->pc == 0x17CB5Cu) {
        ctx->pc = 0x17CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB58u;
        // 0x17cb5c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CB60u;
        goto label_17cb60;
    }
    ctx->pc = 0x17CB58u;
    {
        const bool branch_taken_0x17cb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17cb58) {
            ctx->pc = 0x17CB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CB58u;
            // 0x17cb5c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CC78u;
            goto label_17cc78;
        }
    }
    ctx->pc = 0x17CB60u;
label_17cb60:
    // 0x17cb60: 0x10000049  b           . + 4 + (0x49 << 2)
label_17cb64:
    if (ctx->pc == 0x17CB64u) {
        ctx->pc = 0x17CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB60u;
        // 0x17cb64: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CB68u;
        goto label_17cb68;
    }
    ctx->pc = 0x17CB60u;
    {
        const bool branch_taken_0x17cb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB60u;
        // 0x17cb64: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb60) {
            ctx->pc = 0x17CC88u;
            goto label_17cc88;
        }
    }
    ctx->pc = 0x17CB68u;
label_17cb68:
    // 0x17cb68: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x17cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_17cb6c:
    // 0x17cb6c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x17cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_17cb70:
    // 0x17cb70: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x17cb70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17cb74:
    // 0x17cb74: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x17cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_17cb78:
    // 0x17cb78: 0x40f809  jalr        $v0
label_17cb7c:
    if (ctx->pc == 0x17CB7Cu) {
        ctx->pc = 0x17CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB78u;
        // 0x17cb7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CB80u;
        goto label_17cb80;
    }
    ctx->pc = 0x17CB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17CB80u);
        ctx->pc = 0x17CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB78u;
        // 0x17cb7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB78u, 0x17CB80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17CB80u;
label_17cb80:
    // 0x17cb80: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_17cb84:
    if (ctx->pc == 0x17CB84u) {
        ctx->pc = 0x17CB88u;
        goto label_17cb88;
    }
    ctx->pc = 0x17CB80u;
    {
        const bool branch_taken_0x17cb80 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x17cb80) {
            ctx->pc = 0x17CBA0u;
            goto label_17cba0;
        }
    }
    ctx->pc = 0x17CB88u;
label_17cb88:
    // 0x17cb88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb8c:
    // 0x17cb8c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17cb90:
    // 0x17cb90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cb94:
    // 0x17cb94: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17cb94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17cb98:
    // 0x17cb98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb9c:
    // 0x17cb9c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17cb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17cba0:
    // 0x17cba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17cba4:
    // 0x17cba4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17cba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17cba8:
    // 0x17cba8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x17cba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17cbac:
    // 0x17cbac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17cbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cbb0:
    // 0x17cbb0: 0x240500cb  addiu       $a1, $zero, 0xCB
    ctx->pc = 0x17cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_17cbb4:
    // 0x17cbb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17cbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cbb8:
    // 0x17cbb8: 0xc0c1a0e  jal         func_306838
label_17cbbc:
    if (ctx->pc == 0x17CBBCu) {
        ctx->pc = 0x17CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBB8u;
        // 0x17cbbc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CBC0u;
        goto label_17cbc0;
    }
    ctx->pc = 0x17CBB8u;
    SET_GPR_U32(ctx, 31, 0x17CBC0u);
    ctx->pc = 0x17CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBB8u;
    // 0x17cbbc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x17CBB8u, 0x17CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBC0u;
label_17cbc0:
    // 0x17cbc0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_17cbc4:
    // 0x17cbc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17cbc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cbc8:
    // 0x17cbc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17cbc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cbcc:
    // 0x17cbcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17cbccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cbd0:
    // 0x17cbd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17cbd4:
    // 0x17cbd4: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x17cbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_17cbd8:
    // 0x17cbd8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17cbd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17cbdc:
    // 0x17cbdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17cbdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cbe0:
    // 0x17cbe0: 0xc0b2e92  jal         func_2CBA48
label_17cbe4:
    if (ctx->pc == 0x17CBE4u) {
        ctx->pc = 0x17CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBE0u;
        // 0x17cbe4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CBE8u;
        goto label_17cbe8;
    }
    ctx->pc = 0x17CBE0u;
    SET_GPR_U32(ctx, 31, 0x17CBE8u);
    ctx->pc = 0x17CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBE0u;
    // 0x17cbe4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x17CBE0u, 0x17CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBE8u;
label_17cbe8:
    // 0x17cbe8: 0xc05f41e  jal         func_17D078
label_17cbec:
    if (ctx->pc == 0x17CBECu) {
        ctx->pc = 0x17CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBE8u;
        // 0x17cbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CBF0u;
        goto label_17cbf0;
    }
    ctx->pc = 0x17CBE8u;
    SET_GPR_U32(ctx, 31, 0x17CBF0u);
    ctx->pc = 0x17CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBE8u;
    // 0x17cbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D078u, 0x17CBE8u, 0x17CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBF0u;
label_17cbf0:
    // 0x17cbf0: 0xc06de42  jal         func_1B7908
label_17cbf4:
    if (ctx->pc == 0x17CBF4u) {
        ctx->pc = 0x17CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBF0u;
        // 0x17cbf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CBF8u;
        goto label_17cbf8;
    }
    ctx->pc = 0x17CBF0u;
    SET_GPR_U32(ctx, 31, 0x17CBF8u);
    ctx->pc = 0x17CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBF0u;
    // 0x17cbf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x17CBF0u, 0x17CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBF8u;
label_17cbf8:
    // 0x17cbf8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x17cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_17cbfc:
    // 0x17cbfc: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x17cbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_17cc00:
    // 0x17cc00: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x17cc00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_17cc04:
    // 0x17cc04: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17cc04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17cc08:
    // 0x17cc08: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17cc08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17cc0c:
    // 0x17cc0c: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x17cc0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_17cc10:
    // 0x17cc10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17cc14:
    // 0x17cc14: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x17cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17cc18:
    // 0x17cc18: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_17cc1c:
    if (ctx->pc == 0x17CC1Cu) {
        ctx->pc = 0x17CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC18u;
        // 0x17cc1c: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CC20u;
        goto label_17cc20;
    }
    ctx->pc = 0x17CC18u;
    {
        const bool branch_taken_0x17cc18 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x17CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC18u;
        // 0x17cc1c: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc18) {
            ctx->pc = 0x17CC84u;
            goto label_17cc84;
        }
    }
    ctx->pc = 0x17CC20u;
label_17cc20:
    // 0x17cc20: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_17cc24:
    // 0x17cc24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17cc28:
    // 0x17cc28: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x17cc28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_17cc2c:
    // 0x17cc2c: 0x10000013  b           . + 4 + (0x13 << 2)
label_17cc30:
    if (ctx->pc == 0x17CC30u) {
        ctx->pc = 0x17CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC2Cu;
        // 0x17cc30: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CC34u;
        goto label_17cc34;
    }
    ctx->pc = 0x17CC2Cu;
    {
        const bool branch_taken_0x17cc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC2Cu;
        // 0x17cc30: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc2c) {
            ctx->pc = 0x17CC7Cu;
            goto label_17cc7c;
        }
    }
    ctx->pc = 0x17CC34u;
label_17cc34:
    // 0x17cc34: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x17cc34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_17cc38:
    // 0x17cc38: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x17cc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_17cc3c:
    // 0x17cc3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17cc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17cc40:
    // 0x17cc40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17cc44:
    // 0x17cc44: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x17cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17cc48:
    // 0x17cc48: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x17cc48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_17cc4c:
    // 0x17cc4c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x17cc4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_17cc50:
    // 0x17cc50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cc50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17cc54:
    // 0x17cc54: 0x0  nop
    ctx->pc = 0x17cc54u;
    // NOP
label_17cc58:
    // 0x17cc58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17cc5c:
    // 0x17cc5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17cc5cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_17cc60:
    // 0x17cc60: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_17cc64:
    if (ctx->pc == 0x17CC64u) {
        ctx->pc = 0x17CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC60u;
        // 0x17cc64: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CC68u;
        goto label_17cc68;
    }
    ctx->pc = 0x17CC60u;
    {
        const bool branch_taken_0x17cc60 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x17CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC60u;
        // 0x17cc64: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc60) {
            ctx->pc = 0x17CC84u;
            goto label_17cc84;
        }
    }
    ctx->pc = 0x17CC68u;
label_17cc68:
    // 0x17cc68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17cc6c:
    // 0x17cc6c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17cc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17cc70:
    // 0x17cc70: 0x10000003  b           . + 4 + (0x3 << 2)
label_17cc74:
    if (ctx->pc == 0x17CC74u) {
        ctx->pc = 0x17CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC70u;
        // 0x17cc74: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CC78u;
        goto label_17cc78;
    }
    ctx->pc = 0x17CC70u;
    {
        const bool branch_taken_0x17cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC70u;
        // 0x17cc74: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc70) {
            ctx->pc = 0x17CC80u;
            goto label_17cc80;
        }
    }
    ctx->pc = 0x17CC78u;
label_17cc78:
    // 0x17cc78: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17cc78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_17cc7c:
    // 0x17cc7c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17cc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17cc80:
    // 0x17cc80: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17cc80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17cc84:
    // 0x17cc84: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17cc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_17cc88:
    // 0x17cc88: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x17cc88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17cc8c:
    // 0x17cc8c: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_17cc90:
    if (ctx->pc == 0x17CC90u) {
        ctx->pc = 0x17CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC8Cu;
        // 0x17cc90: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CC94u;
        goto label_17cc94;
    }
    ctx->pc = 0x17CC8Cu;
    {
        const bool branch_taken_0x17cc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x17CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC8Cu;
        // 0x17cc90: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc8c) {
            ctx->pc = 0x17CDDCu;
            goto label_17cddc;
        }
    }
    ctx->pc = 0x17CC94u;
label_17cc94:
    // 0x17cc94: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x17cc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_17cc98:
    // 0x17cc98: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17cc98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_17cc9c:
    // 0x17cc9c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x17cc9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_17cca0:
    // 0x17cca0: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x17cca0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_17cca4:
    // 0x17cca4: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x17cca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_17cca8:
    // 0x17cca8: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x17cca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_17ccac:
    // 0x17ccac: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x17ccacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_17ccb0:
    // 0x17ccb0: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x17ccb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_17ccb4:
    // 0x17ccb4: 0x0  nop
    ctx->pc = 0x17ccb4u;
    // NOP
label_17ccb8:
    // 0x17ccb8: 0xc05ce40  jal         func_173900
label_17ccbc:
    if (ctx->pc == 0x17CCBCu) {
        ctx->pc = 0x17CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCB8u;
        // 0x17ccbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CCC0u;
        goto label_17ccc0;
    }
    ctx->pc = 0x17CCB8u;
    SET_GPR_U32(ctx, 31, 0x17CCC0u);
    ctx->pc = 0x17CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CCB8u;
    // 0x17ccbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x17CCB8u, 0x17CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCC0u;
label_17ccc0:
    // 0x17ccc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ccc4:
    // 0x17ccc4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_17ccc8:
    if (ctx->pc == 0x17CCC8u) {
        ctx->pc = 0x17CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCC4u;
        // 0x17ccc8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CCCCu;
        goto label_17cccc;
    }
    ctx->pc = 0x17CCC4u;
    {
        const bool branch_taken_0x17ccc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17ccc4) {
            ctx->pc = 0x17CCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CCC4u;
            // 0x17ccc8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CDB4u;
            goto label_17cdb4;
        }
    }
    ctx->pc = 0x17CCCCu;
label_17cccc:
    // 0x17cccc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x17ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_17ccd0:
    // 0x17ccd0: 0xc0a4bd4  jal         func_292F50
label_17ccd4:
    if (ctx->pc == 0x17CCD4u) {
        ctx->pc = 0x17CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCD0u;
        // 0x17ccd4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CCD8u;
        goto label_17ccd8;
    }
    ctx->pc = 0x17CCD0u;
    SET_GPR_U32(ctx, 31, 0x17CCD8u);
    ctx->pc = 0x17CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CCD0u;
    // 0x17ccd4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x17CCD0u, 0x17CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCD8u;
label_17ccd8:
    // 0x17ccd8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17ccd8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17ccdc:
    // 0x17ccdc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x17ccdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_17cce0:
    // 0x17cce0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17cce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_17cce4:
    // 0x17cce4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17cce4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17cce8:
    // 0x17cce8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x17cce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_17ccec:
    // 0x17ccec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17ccecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_17ccf0:
    // 0x17ccf0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x17ccf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17ccf4:
    // 0x17ccf4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_17ccf8:
    // 0x17ccf8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x17ccf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_17ccfc:
    // 0x17ccfc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17ccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_17cd00:
    // 0x17cd00: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x17cd00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_17cd04:
    // 0x17cd04: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x17cd04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_17cd08:
    // 0x17cd08: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17cd08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17cd0c:
    // 0x17cd0c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x17cd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_17cd10:
    // 0x17cd10: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x17cd10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_17cd14:
    // 0x17cd14: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17cd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_17cd18:
    // 0x17cd18: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17cd18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17cd1c:
    // 0x17cd1c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x17cd1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_17cd20:
    // 0x17cd20: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17cd20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_17cd24:
    // 0x17cd24: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x17cd24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17cd28:
    // 0x17cd28: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_17cd2c:
    // 0x17cd2c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x17cd2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_17cd30:
    // 0x17cd30: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17cd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_17cd34:
    // 0x17cd34: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17cd34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_17cd38:
    // 0x17cd38: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x17cd38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_17cd3c:
    // 0x17cd3c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17cd3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17cd40:
    // 0x17cd40: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17cd40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_17cd44:
    // 0x17cd44: 0xc07df68  jal         func_1F7DA0
label_17cd48:
    if (ctx->pc == 0x17CD48u) {
        ctx->pc = 0x17CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD44u;
        // 0x17cd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CD4Cu;
        goto label_17cd4c;
    }
    ctx->pc = 0x17CD44u;
    SET_GPR_U32(ctx, 31, 0x17CD4Cu);
    ctx->pc = 0x17CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD44u;
    // 0x17cd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x17CD44u, 0x17CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD4Cu;
label_17cd4c:
    // 0x17cd4c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17cd50:
    // 0x17cd50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17cd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cd54:
    // 0x17cd54: 0xc051dca  jal         func_147728
label_17cd58:
    if (ctx->pc == 0x17CD58u) {
        ctx->pc = 0x17CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD54u;
        // 0x17cd58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CD5Cu;
        goto label_17cd5c;
    }
    ctx->pc = 0x17CD54u;
    SET_GPR_U32(ctx, 31, 0x17CD5Cu);
    ctx->pc = 0x17CD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD54u;
    // 0x17cd58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x17CD54u, 0x17CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD5Cu;
label_17cd5c:
    // 0x17cd5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17cd60:
    // 0x17cd60: 0xc051f10  jal         func_147C40
label_17cd64:
    if (ctx->pc == 0x17CD64u) {
        ctx->pc = 0x17CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD60u;
        // 0x17cd64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CD68u;
        goto label_17cd68;
    }
    ctx->pc = 0x17CD60u;
    SET_GPR_U32(ctx, 31, 0x17CD68u);
    ctx->pc = 0x17CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD60u;
    // 0x17cd64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x17CD60u, 0x17CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD68u;
label_17cd68:
    // 0x17cd68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17cd6c:
    // 0x17cd6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17cd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17cd70:
    // 0x17cd70: 0xc051efe  jal         func_147BF8
label_17cd74:
    if (ctx->pc == 0x17CD74u) {
        ctx->pc = 0x17CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD70u;
        // 0x17cd74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CD78u;
        goto label_17cd78;
    }
    ctx->pc = 0x17CD70u;
    SET_GPR_U32(ctx, 31, 0x17CD78u);
    ctx->pc = 0x17CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD70u;
    // 0x17cd74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x17CD70u, 0x17CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD78u;
label_17cd78:
    // 0x17cd78: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x17cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_17cd7c:
    // 0x17cd7c: 0xc051d4a  jal         func_147528
label_17cd80:
    if (ctx->pc == 0x17CD80u) {
        ctx->pc = 0x17CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD7Cu;
        // 0x17cd80: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CD84u;
        goto label_17cd84;
    }
    ctx->pc = 0x17CD7Cu;
    SET_GPR_U32(ctx, 31, 0x17CD84u);
    ctx->pc = 0x17CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD7Cu;
    // 0x17cd80: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x17CD7Cu, 0x17CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD84u;
label_17cd84:
    // 0x17cd84: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x17cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cd88:
    // 0x17cd88: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x17cd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cd8c:
    // 0x17cd8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17cd8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_17cd90:
    // 0x17cd90: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17cd90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17cd94:
    // 0x17cd94: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x17cd94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cd98:
    // 0x17cd98: 0x0  nop
    ctx->pc = 0x17cd98u;
    // NOP
label_17cd9c:
    // 0x17cd9c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_17cda0:
    if (ctx->pc == 0x17CDA0u) {
        ctx->pc = 0x17CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD9Cu;
        // 0x17cda0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CDA4u;
        goto label_17cda4;
    }
    ctx->pc = 0x17CD9Cu;
    {
        const bool branch_taken_0x17cd9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD9Cu;
        // 0x17cda0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd9c) {
            ctx->pc = 0x17CDB0u;
            goto label_17cdb0;
        }
    }
    ctx->pc = 0x17CDA4u;
label_17cda4:
    // 0x17cda4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17cda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17cda8:
    // 0x17cda8: 0xc05bd90  jal         func_16F640
label_17cdac:
    if (ctx->pc == 0x17CDACu) {
        ctx->pc = 0x17CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDA8u;
        // 0x17cdac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CDB0u;
        goto label_17cdb0;
    }
    ctx->pc = 0x17CDA8u;
    SET_GPR_U32(ctx, 31, 0x17CDB0u);
    ctx->pc = 0x17CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDA8u;
    // 0x17cdac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x17CDA8u, 0x17CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDB0u;
label_17cdb0:
    // 0x17cdb0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x17cdb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17cdb4:
    // 0x17cdb4: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x17cdb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_17cdb8:
    // 0x17cdb8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17cdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_17cdbc:
    // 0x17cdbc: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x17cdbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_17cdc0:
    // 0x17cdc0: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x17cdc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_17cdc4:
    // 0x17cdc4: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x17cdc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_17cdc8:
    // 0x17cdc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17cdcc:
    if (ctx->pc == 0x17CDCCu) {
        ctx->pc = 0x17CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDC8u;
        // 0x17cdcc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CDD0u;
        goto label_17cdd0;
    }
    ctx->pc = 0x17CDC8u;
    {
        const bool branch_taken_0x17cdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDC8u;
        // 0x17cdcc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdc8) {
            ctx->pc = 0x17CDDCu;
            goto label_17cddc;
        }
    }
    ctx->pc = 0x17CDD0u;
label_17cdd0:
    // 0x17cdd0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17cdd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_17cdd4:
    // 0x17cdd4: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_17cdd8:
    if (ctx->pc == 0x17CDD8u) {
        ctx->pc = 0x17CDDCu;
        goto label_17cddc;
    }
    ctx->pc = 0x17CDD4u;
    {
        const bool branch_taken_0x17cdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x17cdd4) {
            ctx->pc = 0x17CCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ccb8;
        }
    }
    ctx->pc = 0x17CDDCu;
label_17cddc:
    // 0x17cddc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x17cddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_17cde0:
    // 0x17cde0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x17cde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_17cde4:
    // 0x17cde4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x17cde4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_17cde8:
    // 0x17cde8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x17cde8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_17cdec:
    // 0x17cdec: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x17cdecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_17cdf0:
    // 0x17cdf0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x17cdf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17cdf4:
    // 0x17cdf4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x17cdf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17cdf8:
    // 0x17cdf8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x17cdf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17cdfc:
    // 0x17cdfc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17cdfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17ce00:
    // 0x17ce00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17ce00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17ce04:
    // 0x17ce04: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x17ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17ce08:
    // 0x17ce08: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x17ce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17ce0c:
    // 0x17ce0c: 0x3e00008  jr          $ra
label_17ce10:
    if (ctx->pc == 0x17CE10u) {
        ctx->pc = 0x17CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE0Cu;
        // 0x17ce10: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CE14u;
        goto label_17ce14;
    }
    ctx->pc = 0x17CE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE0Cu;
        // 0x17ce10: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CE14u;
label_17ce14:
    // 0x17ce14: 0x0  nop
    ctx->pc = 0x17ce14u;
    // NOP
    ctx->pc = 0x17ce18u;
}
