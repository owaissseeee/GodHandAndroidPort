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

// Function: func_0036CF30
// Address: 0x36cf30 - 0x36d0e8
void func_0036CF30_0x36cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CF30_0x36cf30");
#endif

    ctx->pc = 0x36cf30u;

    // 0x36cf30: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36cf34: 0x3c18003f  lui         $t8, 0x3F
    ctx->pc = 0x36cf34u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)63 << 16));
    // 0x36cf38: 0x2442d0e8  addiu       $v0, $v0, -0x2F18
    ctx->pc = 0x36cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955240));
    // 0x36cf3c: 0x3c19003f  lui         $t9, 0x3F
    ctx->pc = 0x36cf3cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)63 << 16));
    // 0x36cf40: 0xaf021ff4  sw          $v0, 0x1FF4($t8)
    ctx->pc = 0x36cf40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F1FF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F1FF4u, _value); } while (0);
    // 0x36cf44: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36cf48: 0x2442d0f8  addiu       $v0, $v0, -0x2F08
    ctx->pc = 0x36cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955256));
    // 0x36cf4c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36cf4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36cf50: 0xaf221ff8  sw          $v0, 0x1FF8($t9)
    ctx->pc = 0x36cf50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F1FF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F1FF8u, _value); } while (0);
    // 0x36cf54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36cf58: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x36cf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x36cf5c: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x36cf5cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
    // 0x36cf60: 0x2442d1a8  addiu       $v0, $v0, -0x2E58
    ctx->pc = 0x36cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955432));
    // 0x36cf64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cf68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36cf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36cf6c: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x36cf6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x36cf70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36cf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36cf74: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x36cf74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x36cf78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36cf7c: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x36cf7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x36cf80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x36cf84: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x36cf84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x36cf88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x36cf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x36cf8c: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x36cf8cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x36cf90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x36cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x36cf94: 0x3c16003f  lui         $s6, 0x3F
    ctx->pc = 0x36cf94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
    // 0x36cf98: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x36cf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x36cf9c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x36cf9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cfa0: 0xafc21ffc  sw          $v0, 0x1FFC($fp)
    ctx->pc = 0x36cfa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F1FFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F1FFCu, _value); } while (0);
    // 0x36cfa4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36cfa8: 0x2442d3d0  addiu       $v0, $v0, -0x2C30
    ctx->pc = 0x36cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955984));
    // 0x36cfac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x36cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x36cfb0: 0xaec22000  sw          $v0, 0x2000($s6)
    ctx->pc = 0x36cfb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2000u, _value); } while (0);
    // 0x36cfb4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36cfb8: 0x2442d3d8  addiu       $v0, $v0, -0x2C28
    ctx->pc = 0x36cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955992));
    // 0x36cfbc: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x36cfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x36cfc0: 0xaea22004  sw          $v0, 0x2004($s5)
    ctx->pc = 0x36cfc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2004u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2004u, _value); } while (0);
    // 0x36cfc4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36cfc8: 0x2442d528  addiu       $v0, $v0, -0x2AD8
    ctx->pc = 0x36cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956328));
    // 0x36cfcc: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x36cfccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x36cfd0: 0xae822008  sw          $v0, 0x2008($s4)
    ctx->pc = 0x36cfd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2008u, _value); } while (0);
    // 0x36cfd4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x36cfd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cfd8: 0x2442d580  addiu       $v0, $v0, -0x2A80
    ctx->pc = 0x36cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956416));
    // 0x36cfdc: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x36cfdcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x36cfe0: 0xae62200c  sw          $v0, 0x200C($s3)
    ctx->pc = 0x36cfe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F200Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F200Cu, _value); } while (0);
    // 0x36cfe4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36cfe8: 0x2442d578  addiu       $v0, $v0, -0x2A88
    ctx->pc = 0x36cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956408));
    // 0x36cfec: 0x3c0d003f  lui         $t5, 0x3F
    ctx->pc = 0x36cfecu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)63 << 16));
    // 0x36cff0: 0xae422010  sw          $v0, 0x2010($s2)
    ctx->pc = 0x36cff0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2010u, _value); } while (0);
    // 0x36cff4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36cff8: 0x2442d7f8  addiu       $v0, $v0, -0x2808
    ctx->pc = 0x36cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957048));
    // 0x36cffc: 0x3c0c003f  lui         $t4, 0x3F
    ctx->pc = 0x36cffcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)63 << 16));
    // 0x36d000: 0xae222014  sw          $v0, 0x2014($s1)
    ctx->pc = 0x36d000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2014u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2014u, _value); } while (0);
    // 0x36d004: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d008: 0x2442d868  addiu       $v0, $v0, -0x2798
    ctx->pc = 0x36d008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957160));
    // 0x36d00c: 0x3c0b003f  lui         $t3, 0x3F
    ctx->pc = 0x36d00cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)63 << 16));
    // 0x36d010: 0xae022018  sw          $v0, 0x2018($s0)
    ctx->pc = 0x36d010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2018u, _value); } while (0);
    // 0x36d014: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d018: 0x2442da28  addiu       $v0, $v0, -0x25D8
    ctx->pc = 0x36d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957608));
    // 0x36d01c: 0x3c0a003f  lui         $t2, 0x3F
    ctx->pc = 0x36d01cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63 << 16));
    // 0x36d020: 0xade2201c  sw          $v0, 0x201C($t7)
    ctx->pc = 0x36d020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F201Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F201Cu, _value); } while (0);
    // 0x36d024: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d028: 0x2442d970  addiu       $v0, $v0, -0x2690
    ctx->pc = 0x36d028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957424));
    // 0x36d02c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x36d02cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x36d030: 0xadc22020  sw          $v0, 0x2020($t6)
    ctx->pc = 0x36d030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2020u, _value); } while (0);
    // 0x36d034: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d038: 0x2442dda0  addiu       $v0, $v0, -0x2260
    ctx->pc = 0x36d038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x36d03c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x36d03cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x36d040: 0xada22024  sw          $v0, 0x2024($t5)
    ctx->pc = 0x36d040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2024u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2024u, _value); } while (0);
    // 0x36d044: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d048: 0x2442ddc8  addiu       $v0, $v0, -0x2238
    ctx->pc = 0x36d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958536));
    // 0x36d04c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x36d04cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x36d050: 0xad822028  sw          $v0, 0x2028($t4)
    ctx->pc = 0x36d050u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2028u, _value); } while (0);
    // 0x36d054: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d058: 0x2442ddd8  addiu       $v0, $v0, -0x2228
    ctx->pc = 0x36d058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958552));
    // 0x36d05c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x36d05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x36d060: 0xad62202c  sw          $v0, 0x202C($t3)
    ctx->pc = 0x36d060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F202Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F202Cu, _value); } while (0);
    // 0x36d064: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d068: 0x2442de00  addiu       $v0, $v0, -0x2200
    ctx->pc = 0x36d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x36d06c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x36d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x36d070: 0xad422030  sw          $v0, 0x2030($t2)
    ctx->pc = 0x36d070u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2030u, _value); } while (0);
    // 0x36d074: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d078: 0x2442da80  addiu       $v0, $v0, -0x2580
    ctx->pc = 0x36d078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957696));
    // 0x36d07c: 0xac971ff0  sw          $s7, 0x1FF0($a0)
    ctx->pc = 0x36d07cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x3F1FF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F1FF0u, _value); } while (0);
    // 0x36d080: 0xad222034  sw          $v0, 0x2034($t1)
    ctx->pc = 0x36d080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2034u, _value); } while (0);
    // 0x36d084: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d088: 0x2442db80  addiu       $v0, $v0, -0x2480
    ctx->pc = 0x36d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957952));
    // 0x36d08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d090: 0xad022038  sw          $v0, 0x2038($t0)
    ctx->pc = 0x36d090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2038u, _value); } while (0);
    // 0x36d094: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d098: 0x2442dbe0  addiu       $v0, $v0, -0x2420
    ctx->pc = 0x36d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958048));
    // 0x36d09c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d09cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d0a0: 0xace2203c  sw          $v0, 0x203C($a3)
    ctx->pc = 0x36d0a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F203Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F203Cu, _value); } while (0);
    // 0x36d0a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d0a8: 0x2442dc70  addiu       $v0, $v0, -0x2390
    ctx->pc = 0x36d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958192));
    // 0x36d0ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36d0acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d0b0: 0xacc22040  sw          $v0, 0x2040($a2)
    ctx->pc = 0x36d0b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2040u, _value); } while (0);
    // 0x36d0b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d0b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36d0b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0bc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x36d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x36d0c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x36d0c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d0c4: 0x2442da30  addiu       $v0, $v0, -0x25D0
    ctx->pc = 0x36d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957616));
    // 0x36d0c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x36d0c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36d0cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x36d0ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d0d0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x36d0d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d0d4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x36d0d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36d0d8: 0xaca22044  sw          $v0, 0x2044($a1)
    ctx->pc = 0x36d0d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F2044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F2044u, _value); } while (0);
    // 0x36d0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36D0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D0DCu;
        // 0x36d0e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D0E4u;
    // 0x36d0e4: 0x0  nop
    ctx->pc = 0x36d0e4u;
    // NOP
    ctx->pc = 0x36d0e8u;
}
