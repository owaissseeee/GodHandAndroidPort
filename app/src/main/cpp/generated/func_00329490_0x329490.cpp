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

// Function: func_00329490
// Address: 0x329490 - 0x3297a8
void func_00329490_0x329490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329490_0x329490");
#endif

    switch (ctx->pc) {
        case 0x3294e0u: goto label_3294e0;
        case 0x329530u: goto label_329530;
        case 0x329564u: goto label_329564;
        case 0x3295e0u: goto label_3295e0;
        case 0x3295f4u: goto label_3295f4;
        case 0x329610u: goto label_329610;
        case 0x329638u: goto label_329638;
        case 0x329664u: goto label_329664;
        case 0x329678u: goto label_329678;
        case 0x329688u: goto label_329688;
        case 0x329698u: goto label_329698;
        case 0x3296acu: goto label_3296ac;
        case 0x3296b4u: goto label_3296b4;
        case 0x329718u: goto label_329718;
        case 0x329774u: goto label_329774;
        case 0x329780u: goto label_329780;
        case 0x329788u: goto label_329788;
        default: break;
    }

    ctx->pc = 0x329490u;

    // 0x329490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329494: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x329494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x329498: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x329498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x32949c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3294a0: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x3294a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3294a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3294a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3294a8: 0x2051023  subu        $v0, $s0, $a1
    ctx->pc = 0x3294a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3294ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3294acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3294b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3294b4: 0xc29023  subu        $s2, $a2, $v0
    ctx->pc = 0x3294b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3294b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3294b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3294bc: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3294BCu;
    {
        const bool branch_taken_0x3294bc = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x3294C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294BCu;
        // 0x3294c0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294bc) {
            ctx->pc = 0x3294D4u;
            goto label_3294d4;
        }
    }
    ctx->pc = 0x3294C4u;
    // 0x3294c4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3294C4u;
    {
        const bool branch_taken_0x3294c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3294c4) {
            ctx->pc = 0x3294C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3294C4u;
            // 0x3294c8: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3294D8u;
            goto label_3294d8;
        }
    }
    ctx->pc = 0x3294CCu;
    // 0x3294cc: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3294CCu;
    {
        const bool branch_taken_0x3294cc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3294D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294CCu;
        // 0x3294d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294cc) {
            ctx->pc = 0x3294E0u;
            goto label_3294e0;
        }
    }
    ctx->pc = 0x3294D4u;
label_3294d4:
    // 0x3294d4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3294d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_3294d8:
    // 0x3294d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3294D8u;
    {
        const bool branch_taken_0x3294d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294D8u;
        // 0x3294dc: 0x24841fb8  addiu       $a0, $a0, 0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294d8) {
            ctx->pc = 0x329528u;
            goto label_329528;
        }
    }
    ctx->pc = 0x3294E0u;
label_3294e0:
    // 0x3294e0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x3294e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3294e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3294E4u;
    {
        const bool branch_taken_0x3294e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294E4u;
        // 0x3294e8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294e4) {
            ctx->pc = 0x329518u;
            goto label_329518;
        }
    }
    ctx->pc = 0x3294ECu;
    // 0x3294ec: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3294ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3294f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3294f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3294f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3294f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3294f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3294f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3294fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3294fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x329500: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x329500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x329504: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x329504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329508: 0x80637420  lb          $v1, 0x7420($v1)
    ctx->pc = 0x329508u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 29728)));
    // 0x32950c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x32950Cu;
    {
        const bool branch_taken_0x32950c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32950c) {
            ctx->pc = 0x329510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32950Cu;
            // 0x329510: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3294E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3294e0;
        }
    }
    ctx->pc = 0x329514u;
    // 0x329514: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x329514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_329518:
    // 0x329518: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x329518u;
    {
        const bool branch_taken_0x329518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329518u;
        // 0x32951c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329518) {
            ctx->pc = 0x329538u;
            goto label_329538;
        }
    }
    ctx->pc = 0x329520u;
    // 0x329520: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x329520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x329524: 0x24841fe0  addiu       $a0, $a0, 0x1FE0
    ctx->pc = 0x329524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8160));
label_329528:
    // 0x329528: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x329528u;
    SET_GPR_U32(ctx, 31, 0x329530u);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x329528u, 0x329530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329530u;
label_329530:
    // 0x329530: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x329530u;
    {
        const bool branch_taken_0x329530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329530u;
        // 0x329534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329530) {
            ctx->pc = 0x32978Cu;
            goto label_32978c;
        }
    }
    ctx->pc = 0x329538u;
label_329538:
    // 0x329538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32953c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x329540: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x329540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x329544: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x329544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x329548: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x329548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32954c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32954cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x329550: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x329550u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x329554: 0x26317420  addiu       $s1, $s1, 0x7420
    ctx->pc = 0x329554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29728));
    // 0x329558: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x329558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x32955c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x32955Cu;
    SET_GPR_U32(ctx, 31, 0x329564u);
    ctx->pc = 0x329560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32955Cu;
    // 0x329560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32955Cu, 0x329564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329564u;
label_329564:
    // 0x329564: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x329564u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x329568: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x329568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x32956c: 0x240a0024  addiu       $t2, $zero, 0x24
    ctx->pc = 0x32956cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x329570: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x329570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x329574: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x329574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x329578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x329578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32957c: 0x24092060  addiu       $t1, $zero, 0x2060
    ctx->pc = 0x32957cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8288));
    // 0x329580: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x329580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x329584: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x329584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x329588: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x329588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x32958c: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x32958cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x329590: 0x2422823  subu        $a1, $s2, $v0
    ctx->pc = 0x329590u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x329594: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x329594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x329598: 0x24a3fedc  addiu       $v1, $a1, -0x124
    ctx->pc = 0x329598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967004));
    // 0x32959c: 0x24a506db  addiu       $a1, $a1, 0x6DB
    ctx->pc = 0x32959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1755));
    // 0x3295a0: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x3295a0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3295a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3295a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3295a8: 0xa7180b  movn        $v1, $a1, $a3
    ctx->pc = 0x3295a8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x3295ac: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3295acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x3295b0: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x3295b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x3295b4: 0xae280030  sw          $t0, 0x30($s1)
    ctx->pc = 0x3295b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 8));
    // 0x3295b8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x3295b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x3295bc: 0xae290034  sw          $t1, 0x34($s1)
    ctx->pc = 0x3295bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 9));
    // 0x3295c0: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x3295c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3295c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3295c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3295c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3295c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3295cc: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3295ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x3295d0: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3295d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x3295d4: 0xae2a0028  sw          $t2, 0x28($s1)
    ctx->pc = 0x3295d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 10));
    // 0x3295d8: 0xc0ce568  jal         func_3395A0
    ctx->pc = 0x3295D8u;
    SET_GPR_U32(ctx, 31, 0x3295E0u);
    ctx->pc = 0x3295DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295D8u;
    // 0x3295dc: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x3295D8u, 0x3295E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295E0u;
label_3295e0:
    // 0x3295e0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3295E0u;
    {
        const bool branch_taken_0x3295e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295E0u;
        // 0x3295e4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295e0) {
            ctx->pc = 0x329690u;
            goto label_329690;
        }
    }
    ctx->pc = 0x3295E8u;
    // 0x3295e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3295e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3295ec: 0xc0c9f40  jal         func_327D00
    ctx->pc = 0x3295ECu;
    SET_GPR_U32(ctx, 31, 0x3295F4u);
    ctx->pc = 0x3295F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295ECu;
    // 0x3295f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D00u, 0x3295ECu, 0x3295F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295F4u;
label_3295f4:
    // 0x3295f4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3295F4u;
    {
        const bool branch_taken_0x3295f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295F4u;
        // 0x3295f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295f4) {
            ctx->pc = 0x329690u;
            goto label_329690;
        }
    }
    ctx->pc = 0x3295FCu;
    // 0x3295fc: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x3295FCu;
    {
        const bool branch_taken_0x3295fc = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x329600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295FCu;
        // 0x329600: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295fc) {
            ctx->pc = 0x329650u;
            goto label_329650;
        }
    }
    ctx->pc = 0x329604u;
    // 0x329604: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x329604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x329608: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x329608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x32960c: 0x0  nop
    ctx->pc = 0x32960cu;
    // NOP
label_329610:
    // 0x329610: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x329610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x329614: 0xd02018  mult        $a0, $a2, $s0
    ctx->pc = 0x329614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x329618: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x329618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32961c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x32961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x329620: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x329620u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x329624: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x329624u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x329628: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x329628u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x32962c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x32962cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x329630: 0xc0ce568  jal         func_3395A0
    ctx->pc = 0x329630u;
    SET_GPR_U32(ctx, 31, 0x329638u);
    ctx->pc = 0x329634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329630u;
    // 0x329634: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x329630u, 0x329638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329638u;
label_329638:
    // 0x329638: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x329638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x32963c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32963cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x329640: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x329640u;
    {
        const bool branch_taken_0x329640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329640u;
        // 0x329644: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329640) {
            ctx->pc = 0x329690u;
            goto label_329690;
        }
    }
    ctx->pc = 0x329648u;
    // 0x329648: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x329648u;
    {
        const bool branch_taken_0x329648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329648) {
            ctx->pc = 0x32964Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329648u;
            // 0x32964c: 0x8e260034  lw          $a2, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329610;
        }
    }
    ctx->pc = 0x329650u;
label_329650:
    // 0x329650: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x329650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x329654: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x329654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x329658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x329658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32965c: 0xc0c996a  jal         func_3265A8
    ctx->pc = 0x32965Cu;
    SET_GPR_U32(ctx, 31, 0x329664u);
    ctx->pc = 0x329660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32965Cu;
    // 0x329660: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A8u, 0x32965Cu, 0x329664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329664u;
label_329664:
    // 0x329664: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x329664u;
    {
        const bool branch_taken_0x329664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329664u;
        // 0x329668: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329664) {
            ctx->pc = 0x329690u;
            goto label_329690;
        }
    }
    ctx->pc = 0x32966Cu;
    // 0x32966c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329670: 0xc0c98b0  jal         func_3262C0
    ctx->pc = 0x329670u;
    SET_GPR_U32(ctx, 31, 0x329678u);
    ctx->pc = 0x329674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329670u;
    // 0x329674: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3262C0u, 0x329670u, 0x329678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329678u;
label_329678:
    // 0x329678: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329678u;
    {
        const bool branch_taken_0x329678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329678u;
        // 0x32967c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329678) {
            ctx->pc = 0x329690u;
            goto label_329690;
        }
    }
    ctx->pc = 0x329680u;
    // 0x329680: 0xc0cd4f0  jal         func_3353C0
    ctx->pc = 0x329680u;
    SET_GPR_U32(ctx, 31, 0x329688u);
    ctx->pc = 0x329684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329680u;
    // 0x329684: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353C0u, 0x329680u, 0x329688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329688u;
label_329688:
    // 0x329688: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329688u;
    {
        const bool branch_taken_0x329688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329688u;
        // 0x32968c: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329688) {
            ctx->pc = 0x3296A0u;
            goto label_3296a0;
        }
    }
    ctx->pc = 0x329690u;
label_329690:
    // 0x329690: 0xc0ca63c  jal         func_3298F0
    ctx->pc = 0x329690u;
    SET_GPR_U32(ctx, 31, 0x329698u);
    ctx->pc = 0x329694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329690u;
    // 0x329694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298F0u, 0x329690u, 0x329698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329698u;
label_329698:
    // 0x329698: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x329698u;
    {
        const bool branch_taken_0x329698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329698u;
        // 0x32969c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329698) {
            ctx->pc = 0x32978Cu;
            goto label_32978c;
        }
    }
    ctx->pc = 0x3296A0u;
label_3296a0:
    // 0x3296a0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3296a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3296a4: 0xc0cd560  jal         func_335580
    ctx->pc = 0x3296A4u;
    SET_GPR_U32(ctx, 31, 0x3296ACu);
    ctx->pc = 0x3296A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296A4u;
    // 0x3296a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335580u, 0x3296A4u, 0x3296ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296ACu;
label_3296ac:
    // 0x3296ac: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x3296ACu;
    SET_GPR_U32(ctx, 31, 0x3296B4u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x3296ACu, 0x3296B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296B4u;
label_3296b4:
    // 0x3296b4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3296b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3296b8: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3296b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3296bc: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x3296bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x3296c0: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x3296c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x3296c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3296c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3296c8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x3296c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3296cc: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x3296ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x3296d0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3296d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3296d4: 0x8cc51410  lw          $a1, 0x1410($a2)
    ctx->pc = 0x3296d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5136)));
    // 0x3296d8: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x3296d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x3296dc: 0xa6200040  sh          $zero, 0x40($s1)
    ctx->pc = 0x3296dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x3296e0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3296e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3296e4: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x3296e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x3296e8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3296e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3296ec: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x3296ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x3296f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3296f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3296f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3296f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3296f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3296f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3296fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3296fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x329700: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x329700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x329704: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x329704u;
    {
        const bool branch_taken_0x329704 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x329708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329704u;
        // 0x329708: 0xa622003e  sh          $v0, 0x3E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329704) {
            ctx->pc = 0x329734u;
            goto label_329734;
        }
    }
    ctx->pc = 0x32970Cu;
    // 0x32970c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x32970cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329710: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x329710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x329714: 0x26220042  addiu       $v0, $s1, 0x42
    ctx->pc = 0x329714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 66));
label_329718:
    // 0x329718: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x329718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x32971c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x32971cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x329720: 0x0  nop
    ctx->pc = 0x329720u;
    // NOP
    // 0x329724: 0x0  nop
    ctx->pc = 0x329724u;
    // NOP
    // 0x329728: 0x0  nop
    ctx->pc = 0x329728u;
    // NOP
    // 0x32972c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32972Cu;
    {
        const bool branch_taken_0x32972c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x329730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32972Cu;
        // 0x329730: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32972c) {
            ctx->pc = 0x329718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329718;
        }
    }
    ctx->pc = 0x329734u;
label_329734:
    // 0x329734: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x329734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32973c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32973cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329740: 0xa6200046  sh          $zero, 0x46($s1)
    ctx->pc = 0x329740u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x329744: 0xa230006c  sb          $s0, 0x6C($s1)
    ctx->pc = 0x329744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 16));
    // 0x329748: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x329748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x32974c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x32974cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x329750: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x329750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x329754: 0xa6200060  sh          $zero, 0x60($s1)
    ctx->pc = 0x329754u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x329758: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x329758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x32975c: 0xa6200068  sh          $zero, 0x68($s1)
    ctx->pc = 0x32975cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x329760: 0xa620006a  sh          $zero, 0x6A($s1)
    ctx->pc = 0x329760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x329764: 0xa230006d  sb          $s0, 0x6D($s1)
    ctx->pc = 0x329764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 109), (uint8_t)GPR_U32(ctx, 16));
    // 0x329768: 0xa2200072  sb          $zero, 0x72($s1)
    ctx->pc = 0x329768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x32976c: 0xc0cada8  jal         func_32B6A0
    ctx->pc = 0x32976Cu;
    SET_GPR_U32(ctx, 31, 0x329774u);
    ctx->pc = 0x329770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32976Cu;
    // 0x329770: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B6A0u, 0x32976Cu, 0x329774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329774u;
label_329774:
    // 0x329774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329778: 0xc0caac8  jal         func_32AB20
    ctx->pc = 0x329778u;
    SET_GPR_U32(ctx, 31, 0x329780u);
    ctx->pc = 0x32977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329778u;
    // 0x32977c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AB20u, 0x329778u, 0x329780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329780u;
label_329780:
    // 0x329780: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x329780u;
    SET_GPR_U32(ctx, 31, 0x329788u);
    ctx->pc = 0x329784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329780u;
    // 0x329784: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x329780u, 0x329788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329788u;
label_329788:
    // 0x329788: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x329788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32978c:
    // 0x32978c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32978cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329794: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329798: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x329798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32979c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32979cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3297a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3297A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3297A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297A0u;
        // 0x3297a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3297A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3297A8u;
}
