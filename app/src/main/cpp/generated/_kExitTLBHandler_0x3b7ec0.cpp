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

// Function: _kExitTLBHandler
// Address: 0x3b7ec0 - 0x3b7fe0
void _kExitTLBHandler_0x3b7ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_kExitTLBHandler_0x3b7ec0");
#endif

    switch (ctx->pc) {
        case 0x3b7ec0u: goto label_3b7ec0;
        case 0x3b7ec4u: goto label_3b7ec4;
        case 0x3b7ec8u: goto label_3b7ec8;
        case 0x3b7eccu: goto label_3b7ecc;
        case 0x3b7ed0u: goto label_3b7ed0;
        case 0x3b7ed4u: goto label_3b7ed4;
        case 0x3b7ed8u: goto label_3b7ed8;
        case 0x3b7edcu: goto label_3b7edc;
        case 0x3b7ee0u: goto label_3b7ee0;
        case 0x3b7ee4u: goto label_3b7ee4;
        case 0x3b7ee8u: goto label_3b7ee8;
        case 0x3b7eecu: goto label_3b7eec;
        case 0x3b7ef0u: goto label_3b7ef0;
        case 0x3b7ef4u: goto label_3b7ef4;
        case 0x3b7ef8u: goto label_3b7ef8;
        case 0x3b7efcu: goto label_3b7efc;
        case 0x3b7f00u: goto label_3b7f00;
        case 0x3b7f04u: goto label_3b7f04;
        case 0x3b7f08u: goto label_3b7f08;
        case 0x3b7f0cu: goto label_3b7f0c;
        case 0x3b7f10u: goto label_3b7f10;
        case 0x3b7f14u: goto label_3b7f14;
        case 0x3b7f18u: goto label_3b7f18;
        case 0x3b7f1cu: goto label_3b7f1c;
        case 0x3b7f20u: goto label_3b7f20;
        case 0x3b7f24u: goto label_3b7f24;
        case 0x3b7f28u: goto label_3b7f28;
        case 0x3b7f2cu: goto label_3b7f2c;
        case 0x3b7f30u: goto label_3b7f30;
        case 0x3b7f34u: goto label_3b7f34;
        case 0x3b7f38u: goto label_3b7f38;
        case 0x3b7f3cu: goto label_3b7f3c;
        case 0x3b7f40u: goto label_3b7f40;
        case 0x3b7f44u: goto label_3b7f44;
        case 0x3b7f48u: goto label_3b7f48;
        case 0x3b7f4cu: goto label_3b7f4c;
        case 0x3b7f50u: goto label_3b7f50;
        case 0x3b7f54u: goto label_3b7f54;
        case 0x3b7f58u: goto label_3b7f58;
        case 0x3b7f5cu: goto label_3b7f5c;
        case 0x3b7f60u: goto label_3b7f60;
        case 0x3b7f64u: goto label_3b7f64;
        case 0x3b7f68u: goto label_3b7f68;
        case 0x3b7f6cu: goto label_3b7f6c;
        case 0x3b7f70u: goto label_3b7f70;
        case 0x3b7f74u: goto label_3b7f74;
        case 0x3b7f78u: goto label_3b7f78;
        case 0x3b7f7cu: goto label_3b7f7c;
        case 0x3b7f80u: goto label_3b7f80;
        case 0x3b7f84u: goto label_3b7f84;
        case 0x3b7f88u: goto label_3b7f88;
        case 0x3b7f8cu: goto label_3b7f8c;
        case 0x3b7f90u: goto label_3b7f90;
        case 0x3b7f94u: goto label_3b7f94;
        case 0x3b7f98u: goto label_3b7f98;
        case 0x3b7f9cu: goto label_3b7f9c;
        case 0x3b7fa0u: goto label_3b7fa0;
        case 0x3b7fa4u: goto label_3b7fa4;
        case 0x3b7fa8u: goto label_3b7fa8;
        case 0x3b7facu: goto label_3b7fac;
        case 0x3b7fb0u: goto label_3b7fb0;
        case 0x3b7fb4u: goto label_3b7fb4;
        case 0x3b7fb8u: goto label_3b7fb8;
        case 0x3b7fbcu: goto label_3b7fbc;
        case 0x3b7fc0u: goto label_3b7fc0;
        case 0x3b7fc4u: goto label_3b7fc4;
        case 0x3b7fc8u: goto label_3b7fc8;
        case 0x3b7fccu: goto label_3b7fcc;
        case 0x3b7fd0u: goto label_3b7fd0;
        case 0x3b7fd4u: goto label_3b7fd4;
        case 0x3b7fd8u: goto label_3b7fd8;
        case 0x3b7fdcu: goto label_3b7fdc;
        default: break;
    }

    ctx->pc = 0x3b7ec0u;

label_3b7ec0:
    // 0x3b7ec0: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x3b7ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_3b7ec4:
    // 0x3b7ec4: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x3b7ec4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_3b7ec8:
    // 0x3b7ec8: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x3b7ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_3b7ecc:
    // 0x3b7ecc: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x3b7eccu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_3b7ed0:
    // 0x3b7ed0: 0x40f  sync.p
    ctx->pc = 0x3b7ed0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b7ed4:
    // 0x3b7ed4: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3b7ed8:
    // 0x3b7ed8: 0x8c4254a8  lw          $v0, 0x54A8($v0)
    ctx->pc = 0x3b7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21672)));
label_3b7edc:
    // 0x3b7edc: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x3b7edcu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_3b7ee0:
    // 0x3b7ee0: 0x40f  sync.p
    ctx->pc = 0x3b7ee0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b7ee4:
    // 0x3b7ee4: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3b7ee8:
    // 0x3b7ee8: 0xdc425480  ld          $v0, 0x5480($v0)
    ctx->pc = 0x3b7ee8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 21632)));
label_3b7eec:
    // 0x3b7eec: 0x400011  mthi        $v0
    ctx->pc = 0x3b7eecu;
    ctx->hi = GPR_U64(ctx, 2);
label_3b7ef0:
    // 0x3b7ef0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3b7ef4:
    // 0x3b7ef4: 0xdc425488  ld          $v0, 0x5488($v0)
    ctx->pc = 0x3b7ef4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 21640)));
label_3b7ef8:
    // 0x3b7ef8: 0x70400011  mthi1       $v0
    ctx->pc = 0x3b7ef8u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_3b7efc:
    // 0x3b7efc: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3b7f00:
    // 0x3b7f00: 0xdc425490  ld          $v0, 0x5490($v0)
    ctx->pc = 0x3b7f00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 21648)));
label_3b7f04:
    // 0x3b7f04: 0x400013  mtlo        $v0
    ctx->pc = 0x3b7f04u;
    ctx->lo = GPR_U64(ctx, 2);
label_3b7f08:
    // 0x3b7f08: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3b7f0c:
    // 0x3b7f0c: 0xdc425498  ld          $v0, 0x5498($v0)
    ctx->pc = 0x3b7f0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 21656)));
label_3b7f10:
    // 0x3b7f10: 0x70400013  mtlo1       $v0
    ctx->pc = 0x3b7f10u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_3b7f14:
    // 0x3b7f14: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3b7f18:
    // 0x3b7f18: 0xdc4254a0  ld          $v0, 0x54A0($v0)
    ctx->pc = 0x3b7f18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 21664)));
label_3b7f1c:
    // 0x3b7f1c: 0x400029  mtsa        $v0
    ctx->pc = 0x3b7f1cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_3b7f20:
    // 0x3b7f20: 0x40f  sync.p
    ctx->pc = 0x3b7f20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b7f24:
    // 0x3b7f24: 0x3c1a0078  lui         $k0, 0x78
    ctx->pc = 0x3b7f24u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)120 << 16));
label_3b7f28:
    // 0x3b7f28: 0x275a5280  addiu       $k0, $k0, 0x5280
    ctx->pc = 0x3b7f28u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 21120));
label_3b7f2c:
    // 0x3b7f2c: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x3b7f2cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_3b7f30:
    // 0x3b7f30: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x3b7f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_3b7f34:
    // 0x3b7f34: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x3b7f34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_3b7f38:
    // 0x3b7f38: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x3b7f38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_3b7f3c:
    // 0x3b7f3c: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x3b7f3cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_3b7f40:
    // 0x3b7f40: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x3b7f40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_3b7f44:
    // 0x3b7f44: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x3b7f44u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_3b7f48:
    // 0x3b7f48: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x3b7f48u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_3b7f4c:
    // 0x3b7f4c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x3b7f4cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_3b7f50:
    // 0x3b7f50: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x3b7f50u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_3b7f54:
    // 0x3b7f54: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x3b7f54u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_3b7f58:
    // 0x3b7f58: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x3b7f58u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_3b7f5c:
    // 0x3b7f5c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x3b7f5cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_3b7f60:
    // 0x3b7f60: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x3b7f60u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_3b7f64:
    // 0x3b7f64: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x3b7f64u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_3b7f68:
    // 0x3b7f68: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x3b7f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_3b7f6c:
    // 0x3b7f6c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x3b7f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_3b7f70:
    // 0x3b7f70: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x3b7f70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_3b7f74:
    // 0x3b7f74: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x3b7f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_3b7f78:
    // 0x3b7f78: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x3b7f78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_3b7f7c:
    // 0x3b7f7c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x3b7f7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_3b7f80:
    // 0x3b7f80: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x3b7f80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_3b7f84:
    // 0x3b7f84: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x3b7f84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_3b7f88:
    // 0x3b7f88: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x3b7f88u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_3b7f8c:
    // 0x3b7f8c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x3b7f8cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_3b7f90:
    // 0x3b7f90: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x3b7f90u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_3b7f94:
    // 0x3b7f94: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x3b7f94u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_3b7f98:
    // 0x3b7f98: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x3b7f98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_3b7f9c:
    // 0x3b7f9c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x3b7f9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_3b7fa0:
    // 0x3b7fa0: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x3b7fa0u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_3b7fa4:
    // 0x3b7fa4: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x3b7fa4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_3b7fa8:
    // 0x3b7fa8: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x3b7fa8u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_3b7fac:
    // 0x3b7fac: 0x40f  sync.p
    ctx->pc = 0x3b7facu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b7fb0:
    // 0x3b7fb0: 0x42000018  eret
    ctx->pc = 0x3b7fb0u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_3b7fb4:
    // 0x3b7fb4: 0x0  nop
    ctx->pc = 0x3b7fb4u;
    // NOP
label_3b7fb8:
    // 0x3b7fb8: 0x0  nop
    ctx->pc = 0x3b7fb8u;
    // NOP
label_3b7fbc:
    // 0x3b7fbc: 0x0  nop
    ctx->pc = 0x3b7fbcu;
    // NOP
label_3b7fc0:
    // 0x3b7fc0: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x3b7fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
label_3b7fc4:
    // 0x3b7fc4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x3b7fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_3b7fc8:
    // 0x3b7fc8: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x3b7fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
label_3b7fcc:
    // 0x3b7fcc: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x3b7fccu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
label_3b7fd0:
    // 0x3b7fd0: 0x20f809  jalr        $at
label_3b7fd4:
    if (ctx->pc == 0x3B7FD4u) {
        ctx->pc = 0x3B7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FD0u;
        // 0x3b7fd4: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7FD8u;
        goto label_3b7fd8;
    }
    ctx->pc = 0x3B7FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x3B7FD8u);
        ctx->pc = 0x3B7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FD0u;
        // 0x3b7fd4: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7FD0u, 0x3B7FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7FD8u;
label_3b7fd8:
    // 0x3b7fd8: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x3b7fd8u;
    runtime->handleBreak(rdram, ctx);
label_3b7fdc:
    // 0x3b7fdc: 0x0  nop
    ctx->pc = 0x3b7fdcu;
    // NOP
    ctx->pc = 0x3b7fe0u;
}
